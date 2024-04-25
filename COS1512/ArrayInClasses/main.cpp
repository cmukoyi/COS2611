#include <iostream>

using namespace std;
const int size = 5;
class Student{
private:
    int semester;
    int marks[size];

public:
    void getData();
    int tot_marks();
};

void Student::getData(){
    cout <<"Enter Semester: "<<endl;
    cin >>semester;
    for(int i = 0;i< size;i++){
        cout <<"Enter marks for subject: "<<i+1<<endl;
        cin >>marks[i];

    }
}

int Student::tot_marks(){
    int total = 0;
    for (int i = 0; i < size;i++){
         total +=  marks[i];

    }
    return total;

}

int main()
{
    Student stud;
    stud.getData();
    int total = stud.tot_marks();
    cout << "\n\nTotal " << total << endl;
    return 0;
}
