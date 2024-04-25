#include <iostream>
#include "employee.h"

using namespace std;

int main()
{
    Employee emp1("John Smith", 5000,35); //using the overload constructor
    Employee emp2; // using the default constructor

    emp2.setName("Jane Powel");
    emp2.setAge(28);
    emp2.setSalary(45000);

    emp1.displayInfo();
    emp2.displayInfo();

    emp1.promote(10000);
    emp1.celebrateBirthday();

    return 0;
}
