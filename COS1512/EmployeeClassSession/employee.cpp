#include "employee.h"
#include <iostream>

//function definition outside the class- we specify the class name Class::scope resolution operator
Employee::Employee(){
    salary = 0;
    name="";
    age=0;
}
Employee::Employee(string n, int s , int a){
    salary = s;
    name = n;
    age = a;
}
void Employee::setSalary(int s){
    salary = s;
 }
int Employee::getSalary(){
    return salary;
}

void Employee::setName(string n){
    name = n;
 }
string Employee::getName(){
    return name;
}

void Employee::setAge(int a){
    age = a;
 }
int Employee::getAge(){
    return age;
}


void Employee::displayInfo(){
    cout<< "Name :" << name <<endl;
    cout<<"Age :" << age << endl;
    cout<<"Salary: R" << salary<<endl;

 }

void Employee::promote(int raiseAmount){
    salary += raiseAmount; //same as salary = salary +raiseAmount
    cout << "congradulations! " << name << "has been promoted" << endl;
    cout << "New Salary: R" << salary << endl;
}


void Employee::celebrateBirthday(){
    age++;
    cout<<"Happy Birthday, " << name << "!" <<endl;
    cout << "Age: " << age << endl;

}
