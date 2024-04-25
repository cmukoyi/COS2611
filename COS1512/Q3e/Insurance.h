#ifndef InsurancePolicy_H
#define InsurancePolicy_H
#include <iostream>
using namespace std;
class InsurancePolicy
{
public:
    InsurancePolicy();
    InsurancePolicy(int pNr, string pHolder, double aRate);
    ~InsurancePolicy();
    void setPolicy(int pNr, string pHolder, double aRate);
    int get_pNr() const;
    string get_pHolder() const;
    double get_aRate() const;
    void showPolicy(ostream &out) const; // Member function to display policy details
private:
    int policyNr;
    string policyHolder;
    double annualRate;
};

InsurancePolicy::InsurancePolicy()
{
    policyNr = 0;
    policyHolder = "";
    annualRate = 0.0;
}

InsurancePolicy::InsurancePolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

InsurancePolicy::~InsurancePolicy()
{
    // Destructor implementation if needed
}

void InsurancePolicy::setPolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

void InsurancePolicy::showPolicy(ostream &out) const
{
    out << "My policy Number is: " << policyNr << endl;
    out << "My policyHolder is: " << policyHolder << endl;
    out << "My Rate is: " << annualRate << endl;
}

#endif //
