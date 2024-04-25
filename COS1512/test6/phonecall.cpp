#include "PhoneCall.h"

PhoneCall::PhoneCall() : number(""), length(0), rate(0) {}

PhoneCall::PhoneCall(const std::string& num) : number(num), length(0), rate(0) {}

float PhoneCall::calcCharge() const {
    return length * rate;
}

std::string PhoneCall::getNumber() const {
    return number;
}

int PhoneCall::getLength() const {
    return length;
}

float PhoneCall::getRate() const {
    return rate;
}

bool operator==(const PhoneCall& call1, const PhoneCall& call2) {
    return call1.number == call2.number;
}

std::istream& operator>>(std::istream& is, PhoneCall& call) {
    is >> call.number >> call.length >> call.rate;
    return is;
}

std::ostream& operator<<(std::ostream& os, const PhoneCall& call) {
    os << call.number << "\t" << call.length << "\t" << call.rate;
    return os;
}
