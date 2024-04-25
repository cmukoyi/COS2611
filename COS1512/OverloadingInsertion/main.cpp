#include <iostream>

using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int a, int b);
    friend ostream& operator<<(ostream& os, Point& p);
};

Point::Point(int a, int b){
    x = a;
    b = y;
}
ostream& operator<<(ostream& os, Point& p){
    os << "x: "<<p.x<<", y: " <<p.y;
    return os;
}
int main()
{

    Point p(2,3);
    cout << p << endl;
    return 0;
}
