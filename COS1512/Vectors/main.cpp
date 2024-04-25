#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <double> doubleVector; // delclaration of vector data structure

    doubleVector.push_back(2.4);
    doubleVector.push_back(2.3);
    doubleVector.push_back(2.8);
    doubleVector.push_back(2.9);



    cout <<"size of array is: " <<doubleVector.size() << endl;
    cout <<"size of array is: " <<doubleVector.capacity() << endl;

    for(int loop = 0; loop < doubleVector.size() ; loop++ ){

        cout << doubleVector[loop] << endl;

    }

     vector <int> v(10);
     cout <<"size of array is: " <<v.size() << endl;


    srand(25); //seed from which random number is generated

     for(int loop = 0; loop < v.size() ; loop++ ){

        v[loop] = (rand()%20) + 1; //%20 produces a value in the range 0 to 19 adding 1 results in values in the 1 to 20
        cout << v[loop] << endl;

    }

    return 0;
}
