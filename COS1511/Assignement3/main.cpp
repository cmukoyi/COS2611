#include <iostream>
#include <string>

using namespace std;

int main() {
      string name = "First Last"; string name1 = "";
      string name2 = "";

    // Extract a substring starting from position 7 (inclusive)
    // with a length of 5 characters.
    string sub = name.substr(0, 5);
    string sub2 = name.substr(6);

    // Print the extracted substring.
    cout << "Substring: " << sub << endl;
    cout << "Substring: " << sub2 << endl;

    return 0;
}
