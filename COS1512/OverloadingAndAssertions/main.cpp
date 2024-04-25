#include <iostream>
#include <cassert>


using namespace std;

//using assert to only divide if z != 0
// x = (x*y/z)

int main()
{
    int x, y, z;
    cout << "Enter Value of x" << endl;
    cin >> x;
    cout << "Enter Value of y" << endl;
    cin >> y;
    cout << "Enter Value of z" << endl;
    cin >> z;

    assert (z != 0);
    if (z != 0){
        cout <<"the value for x is 0 cant divide" << endl;
    }
    x  = (x * y / z);
    cout << "Value of x is:" << x << endl;
    return 0;
}
