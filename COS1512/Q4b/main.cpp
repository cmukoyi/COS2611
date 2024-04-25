#include <iostream>
#include <vector>

using namespace std;

// Template function to check if a value 'val' is found in a vector of any base type
template <typename T>
bool found(const vector<T>& v, T val) {
    for (const T& element : v) {
        if (element == val) {
            return true; // Value found, return true
        }
    }
    return false; // Value not found, return false
}

int main() {
    // Declare and initialize two vectors with different base types
    vector<int> intVector ;


    intVector.push_back(10);
    intVector.push_back(20);
    intVector.push_back(30);
    intVector.push_back(40);
    intVector.push_back(50);

    vector<double> doubleVector ;

    doubleVector.push_back(1.5);
    doubleVector.push_back(2.5);
    doubleVector.push_back(3.5);
    doubleVector.push_back(4.5);
    doubleVector.push_back(5.5);
    // Values to search for
    int searchInt = 30;
    double searchDouble = 3.5;

    // Use the 'found()' template function with both vectors
    bool intFound = found(intVector, searchInt);
    bool doubleFound = found(doubleVector, searchDouble);

    // Output the results
    if (intFound) {
        cout << "Value " << searchInt << " is found in the integer vector." << endl;
    } else {
        cout << "Value " << searchInt << " is not found in the integer vector." << endl;
    }

    if (doubleFound) {
        cout << "Value " << searchDouble << " is found in the double vector." << endl;
    } else {
        cout << "Value " << searchDouble << " is not found in the double vector." << endl;
    }

    return 0;
}
