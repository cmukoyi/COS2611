#include <iostream>
using namespace std;
void func(int &x, int y)
{
          x = x - y;
          y = x * 10;
}
int main()
{
    int value = 7;
    func (value, value);
    cout << value << ", " << value << '\n';
    return 0;
}
