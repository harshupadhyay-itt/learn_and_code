#include <curl/curl.h>
#include <fstream>
#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

std::string API_KEY = "P2ggKKjzeq2PzkiKH5UvetpKMrwJvzo6UpjB4jGTHPTTk9KSbIy4s2hI";
std::string URL = "https://api.pexels.com/v1/search?query=bike?page=1&per_page=5";

size_t writeCallback(void *receivedData, size_t elementSize, size_t numberOfElements, std::string *dataBuffer)
{
    dataBuffer->append((char *)receivedData, elementSize * numberOfElements);
    return elementSize * numberOfElements;
}

void createHTMLFile(rapidjson::Document &parsedResponse)
{
    std::ofstream outputFile("index.html");
    if (outputFile.is_open())
    {
        outputFile << "<!DOCTYPE html><html><head><title>L&C Assignment Week 6</title></head><body>";
        if (parsedResponse.HasMember("photos") && parsedResponse["photos"].IsArray())
        {
            for (const auto &photo : parsedResponse["photos"].GetArray())
            {
                std::string imageUrl = photo["src"]["medium"].GetString();
                outputFile << " <img src='" << imageUrl << "'/>";
            }
        }
        else
        {
            std::cout << "No Data of photos present in the json file\n";
        }
        outputFile << "</body></html>";
        outputFile.close();
    }
    else
    {
        std::cerr << "Unable to open HTML file" << std::endl;
        return;
    }
}

int main()
{
    CURL *curl;
    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_URL, URL.c_str());

    struct curl_slist *headers = NULL;
    std::string authHeader = "Authorization: " + API_KEY;
    headers = curl_slist_append(headers, authHeader.c_str());
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    std::string response;
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    CURLcode curlResponseCode = curl_easy_perform(curl);

    if (curlResponseCode == CURLE_OK)
    {
        rapidjson::Document parsedResponse;
        parsedResponse.Parse(response.c_str());
        createHTMLFile(parsedResponse);
    }
    else
    {
        std::cerr << "Failed to fetch data from the API, the error is: " << curl_easy_strerror(curlResponseCode) << std::endl;
        return 1;
    }

    curl_easy_cleanup(curl);
    curl_global_cleanup();

    return 0;
}
