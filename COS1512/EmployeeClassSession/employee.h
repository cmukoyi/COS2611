#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>


using namespace std;

class Employee{
private:
    int salary;
    string name;
    int age;

public:
    //declaring member functions inside the class
    Employee(); //default constructor
    Employee(string n, int s , int a); //overloaded constructor

    void setSalary(int s);
    int getSalary();

    void setName(string n);
    string getName();

    void setAge(int a);
    int getAge();

    void displayInfo();

    void promote(int raiseAmount);
    void celebrateBirthday();

};

#endif // EMPLOYEE_H
