#include "Dictionary.h"
#include <vector>
#include <iostream>

using namespace std;


template <typename KeyType, typename ValueType>
Dictionary<KeyType, ValueType>::Dictionary() {
    // Nothing to do, vector member variables are empty on declaration
}

template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::add(KeyType key, const ValueType& value) {
    keys.push_back(key);
    values.push_back(value);
}

template <typename KeyType, typename ValueType>
ValueType Dictionary<KeyType, ValueType>::find(KeyType key) const {
    ValueType value;
    for (size_t i = 0; i < keys.size(); i++) {
        if (key == keys[i]) {
            value = values[i];
            break;
        }
    }
    return value;
}

template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::display() const {
    for (size_t i = 0; i < keys.size(); i++) {
        std::cout << keys[i] << ' ' << values[i] << std::endl;
    }
}
