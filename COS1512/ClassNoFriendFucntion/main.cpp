#include <iostream>

using namespace std;

class Rectangle{
private:
    int length, width;
public:
    Rectangle(int len,int wid);
    int getLength() const;
    int getWidth() const;
};

Rectangle::Rectangle(int len, int wid){
    length = len;
    width = wid;
}

int Rectangle::getLength() const{
    return length;
}

int Rectangle::getWidth() const{
    return width;
}


int main()
{
    Rectangle rectangle(5,7);
    int area = rectangle.getLength() * rectangle.getWidth();

    cout << "Area " << area <<endl;
    return 0;
}
