#include <iostream>
#include <string>

using namespace std;
class Date{
public:
    //constructors
    Date();
    Date(int day, int month, int year); //accessors
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    //mutators
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    //operators to calculate next and previous days Date &operator++();
    Date &operator++();
    Date &operator--();
    bool operator<(const Date &d); private:

private:
     //the current day month and year int
    int theday;
    int themonth;
    int theyear;
    //return the length of current month, taking into
    //account leap years
    int monthLength();
};

// a ) The default constructor should initialise the date to 14 September 1752.
    Date::Date(){
    theday = 14;
    themonth = 9;
    theyear = 1752;

}

// b) The overloaded constructor should initialise the date with the given day, month and year.

Date::Date(int day, int month, int year)
    {
        theday = day;
        themonth = month;
        theyear = year;
    }

// Accessors
int Date::getDay() const {
    return theday;
}

int Date::getMonth() const {
    return themonth;
}

int Date::getYear() const {
    return theyear;
}

// Mutators
void Date::setDay(int day) {
    theday = day;
}

void Date::setMonth(int month) {
    themonth = month;
}

void Date::setYear(int year) {
    theyear = year;
}


// Operators to calculate next and previous days
Date Date::operator++() {
    if (theday < MonthLength()) {
        theday++;
    } else {
        theday = 1;
        if (themonth < 12) {
            themonth++;
        } else {
            themonth = 1;
            theyear++;
        }
    }
    return *this;
}

// Operator to calculate the previous day
Date Date::operator--() {
    if (theday > 1) {
        theday--;
    } else {
        if (themonth > 1) {
            themonth--;
        } else {
            themonth = 12;
            theyear--;
        }
        theday = MonthLength();
    }
    return *this;
}

bool Date::operator<(const Date &d) {
    if (theyear != d.theyear) {
        return theyear < d.theyear;
    }
    if (themonth != d.themonth) {
        return themonth < d.themonth;
    }
    return theday < d.theday;
}




int main()
{    Date d1;
// display the day, month and year of d1
  cout << "Date set by constructor: " << d1 << endl;
  cout << d1.GetDay() << endl;
  cout << d1.GetMonth() << endl;
  cout << d1.GetYear() << endl << endl;
   // change the date to 28 Feb 2000
    d1.SetDay(28);
    d1.SetMonth(2);
    d1.SetYear(2000);
    //advance this date by one and display it
    cout << "New date:" << ++d1 << endl;
    // change the date to 1 Jan 2002
    d1.SetDay(1);
    d1.SetMonth(1);
    d1.SetYear(2002);
    cout << "New date:" << --d1<< endl;
    // change the date to 31 Des 2002
     d1.SetDay(31);
     d1.SetMonth(12);
     d1.SetYear(2002);
     cout << "New date:" << ++d1 << endl;
     Date d2(1,1,2003);
     //determine if date d1 is earlier than d2 and write the result
     //on the screen
     if (d2 < d1)
        cout << d2 << " is earlier than " << d1;
     else
        cout << d2 << " is not earlier than " << d1;
     return 0;
}
