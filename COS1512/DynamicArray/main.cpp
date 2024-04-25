#include <iostream>

using namespace std;

int main()
{

    int size; //variable to store the desired size
    cout << "please entter array size: " << endl;
    cin >> size;
    int* myArray = new int[size];// new allocates mem when we need it
    cout << "Populate array: " << endl;
    for (int i = 0; i < size; i++){

        cout <<"myArray ["<<i<<"] : ";

        cin >> myArray[i];

    }
    cout << "deferencing elements of array" << endl;
    for (int i = 0; i < size; i++){

        cout << "myArray ["<<i<<"] contins: " <<myArray[i]<<endl;
        cout << "*(myArray+" <<i<< ") contains: "<<*(myArray+i)<<"\n" <<endl;

    }

    cout << "\n\n"<<endl;
    cout << "Printing the addresses\n"<<endl;
    for(int i = 0;i < size; i++){

        cout << "&myArray[" <<i<<"] is: " <<&myArray[i] <<endl;
        cout << "myArray+" <<i<<" is: "<<myArray+i<<"\n" << endl;

    }

    delete[] myArray; // dealloctae the mem when no longer needed
    return 0;
}
