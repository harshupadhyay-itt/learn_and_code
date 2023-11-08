#include "DigestiveOrgan.h"
#include "Esophagus.h"
#include "Gallbladder.h"
#include "Human.h"
#include "LargeIntestine.h"
#include "Liver.h"
#include "Mouth.h"
#include "Pancreas.h"
#include "SmallIntestine.h"
#include "Stomach.h"

int main()
{
    Human human;

    std::shared_ptr<DigestiveOrgan> esophagus = std::make_shared<Esophagus>("Esophagus");
    std::shared_ptr<DigestiveOrgan> gallbladder = std::make_shared<Gallbladder>("Gallbladder");
    std::shared_ptr<DigestiveOrgan> largeIntestine = std::make_shared<LargeIntestine>("Large Intestine");
    std::shared_ptr<DigestiveOrgan> liver = std::make_shared<Liver>("Liver");
    std::shared_ptr<DigestiveOrgan> mouth = std::make_shared<Mouth>("Mouth");
    std::shared_ptr<DigestiveOrgan> pancrease = std::make_shared<Pancreas>("Pancreas");
    std::shared_ptr<DigestiveOrgan> smallIntestine = std::make_shared<SmallIntestine>("Small Intestine");
    std::shared_ptr<DigestiveOrgan> stomach = std::make_shared<Stomach>("Stomach");

    human.organs.push_back(mouth);
    human.organs.push_back(esophagus);
    human.organs.push_back(stomach);
    human.organs.push_back(smallIntestine);
    human.organs.push_back(pancrease);
    human.organs.push_back(liver);
    human.organs.push_back(gallbladder);
    human.organs.push_back(largeIntestine);

    std::string foodName;
    std::cout << "Enter the food name: ";
    std::cin >> foodName;
    human.digestionProcess(foodName);

    return 0;
}
