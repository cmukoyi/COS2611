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
    virtual void showPolicy(); // Declare showPolicy as virtual
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

void InsurancePolicy::showPolicy()
{
    cout << "My policy Number is: " << policyNr << endl;
    cout << "My policyHolder is: " << policyHolder << endl;
    cout << "My Rate is: " << annualRate << endl;
}

class CarInsurance : public InsurancePolicy
{
public:
    // Constructors
    CarInsurance();
    CarInsurance(int pNr, const string &pHolder, double aRate, double excess);

    // Override showPolicy() to display CarInsurance details
    void showPolicy() override;

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
void CarInsurance::showPolicy()
{
    InsurancePolicy::showPolicy(); // Call the base class showPolicy() function
    cout << "My Excess is: $" << excess << endl;
}

void CarInsurance::setPolicy(int pNr, string pHolder, double aRate, double eValue)
{
    policyNr = pNr;
    policyholder = pHolder;
    annualRate = aRate;
    excess = eValue;
}

// Override setPolicy() to update CarInsurance details
//void CarInsurance::setPolicy(int pNr, const string &pHolder, double aRate, double excess)
//{
    // Call the base class setPolicy() to update common policy details
  //  InsurancePolicy::setPolicy(pNr, pHolder, aRate);

    // Update CarInsurance-specific details
    //this->excess = excess;
//}

int main()
{
    InsurancePolicy myPerson(878778, "Carlos", 43.00);
    myPerson.showPolicy();

    CarInsurance myCarInsurance(123456, "John", 100.00, 500.00);
    myCarInsurance.showPolicy();

    return 0;
}
