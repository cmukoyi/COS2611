#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Dictionary
{
    public:
        Dictionary();
        void add(int key, const string &value); string find (int key) const;
        void display();
    private:
        vector<int> keys;
        vector<string> values;
};

#endif // DICTIONARY_H
