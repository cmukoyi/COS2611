#include <iostream>

using namespace std;
class Student{
private:
    string studentName;
    string studentNumber;
    string address;
    string degree;
public:
    Student();
    Student(string n,string sn,string a, string d);
    void display_info(ostream & out)const;
    float calcFee();

    void setStudentName(string n);
    string getStudentName();

    void setStudentNumber(string sn);
    string getStudentNumber();

    void setAddress(string a);
    string getAddress();

    void setDegree(string d);
    string getDegree();
};

Student::Student() {
    studentName = "";
    studentNumber = "";
    address = "";
    degree = "";
}

Student::Student(string n,string sn,string a, string d) {
    studentName = n;
    studentNumber = sn;
    address = a;
    degree = d;
}

void Student::display_info(ostream &out) const {
    out << "Name: " << studentName << endl;
    out << "StdtNr: " << studentNumber << endl;
    out << "Address: " << address << endl;
    out << "Degree: " << degree << endl;
}


string Student::getStudentName(){
    return studentName;
}

string Student::getStudentNumber(){
    return studentNumber;
}

string Student::getAddress(){
    return address;
}

string Student::getDegree(){
    return degree;
}

float Student::calcFee(){
   if (degree[0] == 'B')
    return 500;
    else return 600;
}

int main()
{
   Student me("Mary Mbeli","12345678","Po Box 16, Pretoria, 0818","BSc" );
   cout << "Name: " << me.getStudentName() << endl << "Student number: "
        << me.getStudentNumber()<<endl << "Address: "<< me.getAddress() << endl
        << "Degree: "<< me.getDegree() << endl << endl;
    cout << "Using member function display_info to display "
        << "student info:"
        << endl;
        me.display_info(cout);
        cout << "Fee due: R"  << me.calcFee() << endl;
        return 0;
}
