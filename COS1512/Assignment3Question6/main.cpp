#include <iostream>

using namespace std;
class PhoneCall{
private:
    string number;
    int length;
    float rate;

public:
    PhoneCall();
    PhoneCall(string p,int ln,float rt);

    void setNumber(string p);
    string getNumber();

    void setLength(int ln);
    int getLength();

    void setRate(float rt);
    float getRate();

    float calcCharge();
    friend bool operator==(const PhoneCall & call1, const PhoneCall & call2);
    friend istream& operator >> (istream& ins, PhoneCall& the_call);
    friend ostream& operator << (ostream& outs,const PhoneCall& the_call);
} ;
// default constructor

PhoneCall::PhoneCall(){
    number = " ";
    length = 0;
    rate = 0;
}

//overloaded constructor
PhoneCall::PhoneCall(string p,int ln,float rt){
    number = p;
    length = ln;
    rate = rt;
}

void PhoneCall::setNumber(string p){
    number = p;
}

string PhoneCall::getNumber(){
    return number;
}

void PhoneCall::setLength(int ln){
    length = ln;
}

int PhoneCall::getLength(){
    return length;
}

void PhoneCall::setRate(float rt){
    rate = rt;
}

float PhoneCall::getRate(){
    return rate;
}

// determine cost of call
float PhoneCall::calcCharge(){
    return length * rate;
}

bool operator==(const PhoneCall & call1, const PhoneCall & call2)
{
    return (call1.number == call2.number);
}

istream& operator >> (istream& ins, PhoneCall & the_call){
    ins >> the_call.number >> the_call.length >> the_call.rate;
    return ins;

}

ostream& operator << (ostream& outs, const PhoneCall & the_call){
    outs << the_call.number << endl << the_call.length << endl
         << the_call.rate;
         return outs;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
