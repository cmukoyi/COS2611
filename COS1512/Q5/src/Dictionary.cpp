#include "Dictionary.h"
#include <vector>
#include <iostream>

using namespace std;

Dictionary::Dictionary()

{
   //nothing to do, vector member variables are empty on
//declaration
};

void Dictionary::add(int key, const string &value)
{
    keys.push_back(key);
    values.push_back(value);
}

string Dictionary::find (int key) const
{
    string value = " ";
    for (unsigned int i = 0; i < keys.size(); i++)
        if (key == keys[i])
            value = values[i];
    if (value == " ")
        return "no such key can be found";
    else return value;
}

void Dictionary::display()
{
     for (unsigned int i = 0; i < keys.size(); i++)
        cout << keys[i] << ' ' << values[i] << endl;
     return;
}



//Dictionary::~Dictionary()
//{
    //dtor
//}
