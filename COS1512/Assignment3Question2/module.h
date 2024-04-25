#ifndef MODULE_H
#define MODULE_H

#include <string>
using namespace std;
class Module {
public:
    Module(const string& code, const string& name);
    void setAssignmentMarks(double mark1, double mark2);
    double calculateSemesterMark();
    void adjustMarks(double adjustment);
    void displaySemesterMark();

private:
    string moduleCode;
    string moduleName;
    double assignmentMarks[2];
    double semesterMark;
};

#endif // MODULE_H
