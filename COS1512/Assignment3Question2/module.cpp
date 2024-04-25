#include "module.h"
#include <iostream>
#include <string>

using namespace std;

Module::Module(const string& code, const string& name) {
    moduleCode = code;
    moduleName = name;
    semesterMark = 0.0;
}

void Module::setAssignmentMarks(double mark1, double mark2) {
    assignmentMarks[0] = mark1;
    assignmentMarks[1] = mark2;
}

double Module::calculateSemesterMark() {
    semesterMark = 0.3 * assignmentMarks[0] + 0.7 * assignmentMarks[1];
    return semesterMark;
}

void Module::adjustMarks(double adjustment) {
    assignmentMarks[1] += adjustment;
}

void Module::displaySemesterMark() {
    cout << "Semester Mark for Module " << moduleCode << " (" << moduleName << "): " << semesterMark << endl;
}
