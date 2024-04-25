#include <iostream>

using namespace std;

int main()
{
    int balance , value;
    int* bal_ptr; //pointer declaration
    balance = 1000; //
    bal_ptr = &balance; // Step 2 - getting the address of the variable and assigning it to bal_ptr
    value = *bal_ptr; // Step 3 - getting the value at the address bal_ptr and assigning it to a valu

    cout << "Value of the balance is: " << balance << endl;
    cout << "Address stored in bal_ptr variable is: " << bal_ptr << endl;
    cout << "Value stored at address: " << bal_ptr << " is: "<<*bal_ptr << endl;
    cout << "Value of the balance is: " << value << endl;
    return 0;
}
