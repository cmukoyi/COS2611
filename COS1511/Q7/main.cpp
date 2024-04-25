#include <iostream>

using namespace std;



int main() {
    int position = 0;
    string number = "1234567890";

    // Using find() to search for "123" in the number string.
    position = number.find("123",0);

    if (position != string::npos) {
        // "123" was found in the string.
        cout << "Found '123' at position: " << position << endl;
    } else {
        // "123" was not found in the string.
        std::cout << "'123' not found in the string." << endl;
    }

    int scores[3][3] = { {1, 2, 3} };
    std::cout << scores[0][2]<< endl;

    return 0;
}
