#include <iostream>

using namespace std;

class TestClass{
private:
    string name;
    string dept;
    int myAge;
    double rate;
    double length;
public:
    TestClass();
    TestClass(string n,string d, int a);

    void setName(string n);
    string getName();

    void setDept(string d);
    string getDept();

    void setAge(int a);
    int getAge();

    void diplay();
    double calcFees(double rt,double ln);
};

TestClass::TestClass(){
    name = " ";
    dept = " ";
    myAge = 0;
    rate = 0.0;
    length = 0.0;

}

TestClass::TestClass(string n,string d, int a){
    name = n;
    dept = d;
    myAge = a;
}


void TestClass::setAge(int a){
    myAge =a ;
}
int TestClass::getAge(){
    return myAge;
}

void TestClass::setName(string n){
     name = n;
}

string TestClass::getName(){
    return name;
}

void TestClass::setDept(string d){
     dept = d;
}
string TestClass::getDept(){
    return dept;
}

void TestClass::diplay(){
    cout << "My name is: " << name << endl;
    cout << "My Age is: " << myAge << endl;
    cout << "My Dept is: " << dept << endl;

}

double TestClass::calcFees(double rt, double ln){

    return rt * ln;
}

int main()
{
    TestClass myPerson("Carlos","IT",43);
    myPerson.diplay();



    //double fees = myPerson.calcFees(20.8,39.9);
    cout << "My Fees is: " << myPerson.calcFees(20.8,39.9) << endl;

    return 0;
}
