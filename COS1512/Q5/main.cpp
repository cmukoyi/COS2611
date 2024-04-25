#include <iostream>
#include <cstdlib>
#include "Dictionary.h"
#include <vector>

using namespace std;

int main()
{
Dictionary parts;
     string part;
     int key;

    //aad 4 values to the parts dictionary
    for (int i = 0; i <= 3; i++)
        {
            cout << "Please enter a part name and a key to add "
                 << "to the parts dictionary." << endl;
            cout << "Part name: ";
            getline(cin, part);
            cout << "Key for part name: ";
            cin >> key;
            parts.add(key, part);
            cin.get();
        }
cout << endl;
parts.display();
cout << endl;

//find the part for a key
cout << "For which key do you want to find the part? ";
cin >> key;
cout<<"The part for key "<<key <<" is ";
cout << parts.find(key) << endl;
return 0;
}
