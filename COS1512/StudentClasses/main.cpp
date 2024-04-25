#include <iostream>

using namespace std;
class Student { // class called student
    private: string name;
             int studentID;
             int year;
             double average;
    public:
        Student(){
            name="John";
            studentID = 0;
            year = 0;
            average = 0.0;
        }

    Student(string n, int i, int y, double a){
            name = n,
            studentID = i;
            year = y;
            average = a;
    }

    void setName(string n){
        name = n;
    }
     void setStudentID(int i){
        studentID = i;
    }
     void setYear(int y){
        year = y;
    }
     void setAverage(double a){
        average = a;
    }

    string getName(){
        return name;
    }

    int getStudentID(){
        return studentID;
    }

    int getYear(){
        return year;
    }

    int getAverage(){
        return average;
    }

};

int main()
{
    Student studObj1;
    cout << studObj1.getName() << endl;

    Student studObj2 = Student("Carlos",23,1990,34);
    cout << studObj2.getName() << endl;


    return 0;
}
