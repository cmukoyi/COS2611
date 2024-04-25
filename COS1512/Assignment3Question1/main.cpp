#include <iostream>

using namespace std;
class Employee{
private:
    string name;
    string lastName;
    int salary;
public:
    Employee();
    Employee(string n, string ln, int s);

    void setName(string n);
    string getName();

    void setlastName(string ln);
    string getlastName();

    void setSalary(int s);
    int getSalary();

    void displayInfo();
    void increase(double raiseAmount);

};
//default constructor that sets name lastname and salary
Employee::Employee(){
    name="";
    lastName = "";
    salary = 0;

}
Employee::Employee(string n, string ln, int s){
    name = n;
    lastName = ln;
    salary = s;
}

void Employee::setName(string n){
    name = n;
}
string Employee::getName(){
    return name;
}

void Employee::setlastName(string ln){
    lastName = ln;
}
string Employee::getlastName(){
    return lastName;
}

void Employee::setSalary(int s){
    salary = s;
}

int Employee::getSalary(){
    return salary;
}

void Employee::displayInfo(){
    cout<< "Name :" << name <<" " << lastName << endl;
    cout<<"Salary: R" << salary<<endl;

 }
 void Employee::increase(double raiseAmount){
    salary *= raiseAmount ; //same as salary = salary * raiseAmount
    cout << "Congradulations! " << name << " "<< lastName << endl;
    cout << "New Salary: R" << salary <<endl;
}

int main()
{
    string name,lastname;
    int salary;

    Employee myEmployee1("Joe","Soap",145600);
    myEmployee1.displayInfo();
    Employee myEmployee2;
    cout << "Enter Employee Name: "<< endl;
    cin >> name;

    cout << "Enter Employee Last Name: "<< endl;
    cin >> lastname;

    cout << "Enter Employee Salary: "<< endl;
    cin >> salary;

    myEmployee2.setName(name);
    myEmployee2.setlastName(lastname);
    myEmployee2.setSalary(salary);
    cout << "\n";
    myEmployee2.displayInfo();
    cout << "\n" ;
    myEmployee1.increase(1.1); //10% increase
    cout << "\n";
    myEmployee2.increase(1.1);


    return 0;
}


