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
