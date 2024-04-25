#include <iostream>
#include "Dictionary.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
int main() {
    Dictionary<int, string> parts;
    string part;
    int key;

    // Add 4 values to the parts dictionary
    for (int i = 0; i <= 3; i++) {
       cout << "Please enter a part name and a key to add to the parts dictionary." << endl;
       cout << "Part name: ";
        getline(cin, part);
        cout << "Key for part name: ";
        cin >> key;
        parts.add(key, part);
        cin.ignore();
    }

    cout << endl;
    parts.display();
    cout << endl;

    // Find the part for a key
    cout << "For which key do you want to find the part? ";
    cin >> key;
    cout << "The part for key " << key << " is " << parts.find(key) << endl;

    return 0;
}
