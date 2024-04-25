#include <iostream>
#include <vector>

using namespace std;

// Function to check if a value 'val' is found in vector 'v'
bool found(const vector<int>& v, int val) {
    for (int element : v) {
        if (element == val) {
            return true; // Value found, return true
        }
    }
    return false; // Value not found, return false
}

int main() {
    // Declare and initialize a vector of integers
    vector<int> numbers ;

// Initialize the vector by adding elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Value to search for
    int searchValue = 30;

    // Call the 'found()' function to check if 'searchValue' is in the vector 'numbers'
    bool isFound = found(numbers, searchValue);

    // Output the result
    if (isFound) {
        cout << "Value " << searchValue << " is found in the vector." << endl;
    } else {
        cout << "Value " << searchValue << " is not found in the vector." << endl;
    }

    return 0;
}
