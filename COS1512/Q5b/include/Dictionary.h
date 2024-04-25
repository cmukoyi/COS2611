#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

template <typename KeyType, typename ValueType>
class Dictionary {
public:
    Dictionary();
    void add(KeyType key, const ValueType& value);
    ValueType find(KeyType key) const;
    void display() const;

private:
    vector<KeyType> keys;
    vector<ValueType> values;
};



#endif // DICTIONARY_H
