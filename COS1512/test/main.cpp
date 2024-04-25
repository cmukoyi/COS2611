#include <iostream>
#include <string>

using namespace std;
const int DaysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

class Date {
public:
    // Constructors
    Date();
    Date(int day, int month, int year);

    // Accessors
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Mutators
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    // Operators to calculate next and previous days
    Date& operator++();
    Date& operator--();
    bool operator<(const Date& d);

private:
    int theday;
    int themonth;
    int theyear;

    int monthLength();
};

Date::Date() {
    theday = 14;
    themonth = 9;
    theyear = 1752;
}

Date::Date(int day, int month, int year) {
    theday = day;
    themonth = month;
    theyear = year;
}

int Date::getDay() const {
    return theday;
}

int Date::getMonth() const {
    return themonth;
}

int Date::getYear() const {
    return theyear;
}

void Date::setDay(int day) {
    theday = day;
}

void Date::setMonth(int month) {
    themonth = month;
}

void Date::setYear(int year) {
    theyear = year;
}

Date& Date::operator++() {
    if (theday < monthLength()) {
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

Date& Date::operator--() {
    if (theday > 1) {
        theday--;
    } else {
        if (themonth > 1) {
            themonth--;
        } else {
            themonth = 12;
            theyear--;
        }
        theday = monthLength();
    }
    return *this;
}


bool Date::operator<(const Date& d) {
    if (theyear < d.theyear)
        return true;
    else {
        if (theyear > d.theyear)
            return false;
        else {
            // The years are equal
            if (themonth < d.themonth)
                return true;
            else {
                if (themonth > d.themonth)
                    return false;
                else {
                    // The months are equal
                    if (theday < d.theday)
                        return true;
                    else {
                        return false;
                    }
                }
            }
        }
    }
}


int Date::monthLength() {
    // Implement this method to return the correct number of days in the current month
    // Taking leap years into account.
    if ((themonth == 2) && (((theyear % 4 == 0) && (theyear % 100 != 0)) || (theyear % 400 == 0))) {
    return 29;
} else {
    return DaysInMonth[themonth - 1];
}

}

// Define the output operator for the Date class
ostream& operator<<(ostream& os, const Date& d) {
    os << d.getDay() << "/" << d.getMonth() << "/" << d.getYear();
    return os;
}

int main() {
    Date d1;
    cout << "Date set by constructor: " << d1 << endl;
cout << d1.getDay() << endl;
  cout << d1.getMonth() << endl;
  cout << d1.getYear() << endl << endl;
   // change the date to 28 Feb 2000
    d1.setDay(28);
    d1.setMonth(2);
    d1.setYear(2000);
    //advance this date by one and display it
    cout << "New date:" << ++d1 << endl;
    // change the date to 1 Jan 2002
    d1.setDay(1);
    d1.setMonth(1);
    d1.setYear(2002);
    cout << "New date:" << --d1<< endl;
    // change the date to 31 Des 2002
     d1.setDay(31);
     d1.setMonth(12);
     d1.setYear(2002);
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
