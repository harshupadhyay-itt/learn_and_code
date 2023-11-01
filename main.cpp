#include "include/Manager.h"
#include "include/Programmer.h"

int main()
{
    Manager manager = {"Grace", 4};
    Human *firstHuman = &manager;
    std::cout << "Name: " << firstHuman->getName() << std::endl;
    std::cout << "work: " << firstHuman->work() << std::endl;
    std::cout << "Number of project mananged: " << manager.getProjectManaged() << "\n";
    int yearsOfExperience = 5;
    std::cout<<"salary Before Increment: "<<manager.getSalary()<<"\n";
    std::cout<<"salary After Increment: "<<firstHuman->getIncresedSalary(yearsOfExperience)<<"\n\n";

    Programmer programmer = {"Harsh", "HP DUNES"};
    Human *secondHuman = &programmer;
    std::cout << "Name: " << secondHuman->getName() << std::endl;
    std::cout << "work: " << secondHuman->work() << std::endl;
    std::cout << "work in project: " << programmer.getProjectName() << std::endl;
    yearsOfExperience = 2;
    std::cout<<"salary Before Increment: "<<programmer.getSalary()<<"\n";
    std::cout<<"salary After Increment: "<<secondHuman->getIncresedSalary(yearsOfExperience)<<"\n\n";

    return 0;
}
