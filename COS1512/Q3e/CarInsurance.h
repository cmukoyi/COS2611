#ifndef CarInsurance_H
#define CarInsurance_H
#include <iostream>

using namespace std;
class CarInsurance : public InsurancePolicy
{
public:
    // Constructors
    CarInsurance();
    CarInsurance(int pNr, const string &pHolder, double aRate, double excess);

    // Override showPolicy() to display CarInsurance details
    void showPolicy(ostream &out) const;

    // Override setPolicy() to update CarInsurance details
    void setPolicy(int pNr, const string &pHolder, double aRate, double excess);

private:
    double excess;
};

// Implementation of CarInsurance constructors
CarInsurance::CarInsurance() : excess(0.0) {}

CarInsurance::CarInsurance(int pNr, const string &pHolder, double aRate, double excess)
    : InsurancePolicy(pNr, pHolder, aRate), excess(excess) {}

// Override showPolicy() to display CarInsurance details
void CarInsurance::showPolicy(ostream &out) const
{
    InsurancePolicy::showPolicy(out); // Call the base class showPolicy() function
    out << "My Excess is: $" << excess << endl;
}

// Override setPolicy() to update CarInsurance details
void CarInsurance::setPolicy(int pNr, const string &pHolder, double aRate, double excess)
{
    // Call the base class setPolicy() to update common policy details
    InsurancePolicy::setPolicy(pNr, pHolder, aRate);

    // Update CarInsurance-specific details
    this->excess = excess;
}

#endif //
