#include <iostream>
using namespace std;
int i = 100;
void abc()
{
                    int i = 8;
                    cout << "first = " << i++ << endl;
}
int main()
{
                   int i = 2;
                   abc();
                   cout << "second = " << i << endl;
                   abc();
                    return 0;
}
