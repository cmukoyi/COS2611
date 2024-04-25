#include <iostream>
#include <cassert>


using namespace std;

int square(int x){

    return x * x;
}

double square(double x){

    return x * x;
}
int main()
{
    int x ;
    double y;
    const int MYVAL = 5; //const values do not change note use of uppercase

    cout << "Enter the value of x: \n";
    cin >> x;
    cout << "Call to int square " << square(x) << endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Call to double square "<< square(7.5) << endl;
    return 0;
}
