#include<iostream>
using namespace std;

class Student{
    public:
        string myName;
        int studentNumber;
        string myLastName;
        void display();
        string Student(string n, int studN, string myLast);
        
    private:
        string faculty;
        string degree;
        string year;


};

 string Student::Student(string n, int studN, string myLast){
    n = myName;
    studN = studentNumber;
    myLast = myLastName;
}
void Student::display(){
    cout <<"This is a function" << endl;

}

int main()
{
    Student myStudent;
    myStudent.myLastName = "Mukoyi";
    myStudent.display();
    cout << myStudent.myLastName << endl;

    return 0;
}