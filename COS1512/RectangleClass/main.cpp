#include <iostream>

using namespace std;

  class Rectangle{
    private:
        double length;
        double width;
    public:
        void setLength(double ln);
        void setWidth(double wd);
        double getLength() const;
        double getWidth() const;
        double calculateArea() ;

    };

    //function to set the lenght
    void Rectangle::setLength(double len){
        length = len;
    }

     void Rectangle::setWidth(double wth){
        width = wth;
    }


    double Rectangle::calculateArea(){
        return width*length;
    }
int main()
{
    Rectangle rect1;
    cout << "rectangle 1 area: " << rect1.calculateArea()<<endl;
    rect1.setWidth(8);
    rect1.setLength(8);

    cout << "updated rectangle 1 area: " << rect1.calculateArea()<<endl;

    return 0;
}
