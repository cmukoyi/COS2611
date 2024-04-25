#include <iostream>

using namespace std;

class Employee{
private:
    int salary;
public:
    //setter
    void setSalary(int s);
    //getter
    int getSalary();

};

void Employee::setSalary(int s){
    salary = s;
}
int Employee::getSalary(){
    return salary;
}


int main()
{
    Employee myEmp;
    myEmp.setSalary(45000);
    int mySal = myEmp.getSalary();
    cout << "My Salary is: " << mySal << endl;
    return 0;
}
