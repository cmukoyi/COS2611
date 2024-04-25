#include <iostream>

using namespace std;

class Rectangle{
private:
    int length,width;
public:
    Rectangle(int len,int wid);
    friend void displayArea(Rectangle& rect);
};

Rectangle::Rectangle(int len, int wid){
    length = len;
    width = wid;
}

void displayArea(Rectangle& rect){
    int area = rect.length * rect.width;
    cout << "Area: " << area << endl;

}
int main()
{
    Rectangle rectangle(5,7);
    displayArea(rectangle);
    return 0;
}
