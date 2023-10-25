#include "inc/Manager.h"
#include "inc/Programmer.h"

int main()
{
    Manager manager = {"Manager", 4};
    Human *human1 = &manager;
    std::cout << "Name: " << human1->getName() << std::endl;
    std::cout << "work: " << human1->work() << std::endl;
    std::cout << "Number of project mananged: " << manager.getProjectManaged() << "\n\n";

    Programmer programmer = {"Programmer", "Project Name"};
    Human *human2 = &programmer;
    std::cout << "Name: " << human2->getName() << std::endl;
    std::cout << "work: " << human2->work() << std::endl;
    std::cout << "work in project: " << programmer.getProjectName() << std::endl;

    return 0;
}
