#include <iostream>

using namespace std;

class Point{
private:
    int x,y;
public:
    Point();
    Point(int a, int b);
    Point operator+(Point& other);
    void display() const;
};
Point::Point() {
    x = 3;
    y = 5;
}
Point::Point(int a, int b) {
    x = a;
    y = b;
}

Point Point::operator+(Point &other) {
    Point result;
    result.x = x + other.x;
    result.y = y + other.y;
    return result;
}

void Point::display() const  {
    cout << "x: " << x <<", y: "<< y <<endl;

}
int main() {
    Point p1(3,4);
    Point p2(5,6);
    Point sum = p1.operator+(p2);
    sum.display();
    return 0;
}
