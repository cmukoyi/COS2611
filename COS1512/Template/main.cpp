#include <iostream>

using namespace std;

//function templates work for generic data types
//allows logic to be written once and reused

template<typename T>
T myCalculation(T num1, T num2){

    return num1 * num2;

}

int main() {

    cout << myCalculation(4,5) << endl;
    cout << myCalculation(3.4,5.8) << endl;

   return 0;
}
