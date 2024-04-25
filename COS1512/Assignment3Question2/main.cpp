#include <iostream>
#include <string>
#include "module.h"
using namespace std;

int main() {
    const int numModules = 2; // Change this to the number of modules you are registered for
    Module modules[numModules] = {
        Module("CS101", "Introduction to Programming"),
        Module("COS1512", "Introduction to Programming II")
    };

    for (int i = 0; i < numModules; ++i) {
        double mark1, mark2;

//        cout << "Enter assignment 1 mark for module " << modules[i].getModuleName() << ": ";
        cin >> mark1;
//        cout << "Enter assignment 2 mark for module " << modules[i].getModuleName() << ": ";
        cin >> mark2;

        modules[i].setAssignmentMarks(mark1, mark2);
    }

    for (int i = 0; i < numModules; ++i) {
        double semesterMark = modules[i].calculateSemesterMark();
        modules[i].displaySemesterMark();
    }

    modules[1].adjustMarks(5.0); // Adjust marks for COS1512 by +5%

    double adjustedSemesterMark = modules[1].calculateSemesterMark();
    cout << "Adjusted Semester Mark for COS1512: " << adjustedSemesterMark << endl;

    cout << "\nUpdated Semester Marks:\n";
    for (int i = 0; i < numModules; ++i) {
        double semesterMark = modules[i].calculateSemesterMark();
        modules[i].displaySemesterMark();
    }

    return 0;
}
