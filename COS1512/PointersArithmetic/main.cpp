#include <iostream>

using namespace std;

int main()
{
    int* ptr , num ;//step 1 - declaring a pointer and regular variable
    ptr = &num ;// getting the address of the num variable and assigning it to a ptr
    *ptr = 100; // step 3 - assigning the pointer to value 100
    cout << num << endl;
    (*ptr)++ ;//incrementing the pointer by 1
    cout << num << endl;
    (*ptr)*=2 ;//multiplying the pointer
    cout << num << endl;
    (*ptr)+=8 ;;//incrementing the pointer by 8
    cout << num << endl;
    cout << ptr << endl;

    cout << "Hello world!" << endl;
    return 0;
}
