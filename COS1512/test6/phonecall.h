#ifndef PHONECALL_H
#define PHONECALL_H

#include <iostream>
#include <string>

class PhoneCall {
public:
    PhoneCall();
    PhoneCall(const std::string& num);
    float calcCharge() const;

    // Accessors
    std::string getNumber() const;
    int getLength() const;
    float getRate() const;

    friend bool operator==(const PhoneCall& call1, const PhoneCall& call2);
    friend std::istream& operator>>(std::istream& is, PhoneCall& call);
    friend std::ostream& operator<<(std::ostream& os, const PhoneCall& call);

private:
    std::string number;
    int length;
    float rate;
};




#endif // PHONECALL_H
