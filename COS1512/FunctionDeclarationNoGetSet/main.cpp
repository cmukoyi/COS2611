#include <iostream>

using namespace std;
class MyClass{
public:
    int x;
private:
    int y;

};


int main()
{
    MyClass myObj;
    myObj.x = 25; //allowed public
    myObj.y = 50; //not allowed

    return 0;
}
