
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct City
{
    double latitude;
    double longitude;
    std::string name;
};

// Function to calculate the haversine distance between two locations
double haversineDistance(const City &city1, const City &city2)
{
    const double EARTH_RADIUS = 6371.0;

    // Convert latitude and longitude from degrees to radians
    double latitudeOfCity1 = city1.latitude * M_PI / 180.0;
    double longitudeOfCity1 = city1.longitude * M_PI / 180.0;
    double latitudeOfCity2 = city2.latitude * M_PI / 180.0;
    double longitudeOfCity2 = city2.longitude * M_PI / 180.0;

    // Haversine formula
    double deltaOfLlatitude = latitudeOfCity2 - latitudeOfCity1;
    double deltaOfLongitude = longitudeOfCity2 - longitudeOfCity1;
    double haversineSquared = (std::sin(deltaOfLlatitude / 2) * std::sin(deltaOfLlatitude / 2)) +
                              (std::cos(latitudeOfCity1) * std::cos(latitudeOfCity2) * std::sin(deltaOfLongitude / 2) * std::sin(deltaOfLongitude / 2));
    double angularDistance = 2 * std::atan2(std::sqrt(haversineSquared), std::sqrt(1 - haversineSquared));
    double distanceBetweenCities = EARTH_RADIUS * angularDistance;

    return distanceBetweenCities;
}

std::vector<std::vector<City>> getCollectionOfCitiesClustor(std::vector<City> &cities)
{
    std::vector<std::vector<City>> collectionOfCityCluster;
    std::vector<bool> clustered(cities.size(), false);
    double radius = 1113;

    for (int index = 0; index < cities.size(); index++)
    {
        if (!clustered[index])
        {
            std::vector<City> cityCluster;
            cityCluster.push_back(cities[index]);
            clustered[index] = true;

            for (int iterator = 0; iterator < cities.size(); iterator++)
            {
                double distance = haversineDistance(cities[index], cities[iterator]);
                if (!clustered[iterator] && distance <= radius)
                {
                    cityCluster.push_back(cities[iterator]);
                    clustered[iterator] = true;
                }
            }
            collectionOfCityCluster.push_back(cityCluster);
        }
    }
    return collectionOfCityCluster;
}

void readDataFromCSVFile(std::vector<City> &cities, std::string fileName)
{
    std::ifstream file(fileName);

    if (!file.is_open())
    {
        std::cerr << "Error opening the file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::stringstream dataStream(line);

        City city;
        std::getline(dataStream, city.name, ',');
        dataStream >> city.latitude;
        dataStream.ignore();
        dataStream >> city.longitude;

        cities.push_back(city);
    }
    file.close();
    return;
}

void printClustorsOfCities(std::vector<std::vector<City>> &collectionOfCityCluster)
{
    for (size_t index = 0; index < collectionOfCityCluster.size(); ++index)
    {
        std::cout << "Cluster " << (index + 1) << ": ";
        for (const City &city : collectionOfCityCluster[index])
        {
            std::cout << city.name << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::string fileName = "data.csv";
    std::vector<City> cities;

    readDataFromCSVFile(cities, fileName);

    auto collectionOfCityCluster = getCollectionOfCitiesClustor(cities);

    // print the collectionOfCityCluster
    printClustorsOfCities(collectionOfCityCluster);

    return 0;
}
