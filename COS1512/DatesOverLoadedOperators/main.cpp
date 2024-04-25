#include <iostream>

using namespace std;

class Date{
private:
    int day,month,year;
public:
    Date (int d,int m,int y);
    bool operator==(Date& other);

};

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

bool Date::operator==(Date& other){
    return(day==other.day && month==other.month && year==other.year);
}
int main()
{
    Date d1(1,2,2023);
    Date d2(1,2,2023);

    if(d1==d2){
        cout << "Dates are equal";

    }else {
        cout << "Dates are NOT equal";
    }

    return 0;
}
