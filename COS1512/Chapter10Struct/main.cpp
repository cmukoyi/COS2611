#include <iostream>

using namespace std;

struct StudentStruct{

    int studentID;
    string name;
    int year;
    double average;
};

void getData(StudentStruct &stud){
    cout << "Enter StudentID \n";
    cin >> stud.studentID;
    cout << "Enter Name \n";
    cin >> stud.name;
    cout << "Enter Year \n";
    cin >> stud.year;
    cout << "Enter Average \n";
    cin >> stud.average;

}

int main()
{
    StudentStruct student1 , student2;
    getData(student1);

    cout <<student1.name<< " with id of " << student1.studentID <<" year "<<student1.year<<" Average "<<student1.average <<endl;
    getData(student2);

    cout <<student2.name<< " with id of " << student2.studentID <<" year "<<student2.year<<" Average "<<student2.average <<endl;

    return 0;
}
