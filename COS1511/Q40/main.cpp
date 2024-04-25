#include <iostream>
using namespace std;
int var = 10;
int func()
{
return var;
}
int main()
{
int var = 5;
cout << func() << "\n";
return 0;
}
