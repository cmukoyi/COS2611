#include <iostream>
using namespace std;

class InsurancePolicy
{
    public:
        InsurancePolicy();
        InsurancePolicy(int pNr, string pHolder, double aRate);
        ~InsurancePolicy();
        void setPolicy(int pNr, string pHolder, double aRate);
        int get_pNr()const;
        string get_pHolder()const;
        double get_aRate()const;
         void showPolicy();
    private:
        int policyNr;
        string policyHolder;
        double annualRate;
};


InsurancePolicy::InsurancePolicy(){
    policyNr = 0 ;
    policyHolder = "";
    annualRate = 0.0;

}

InsurancePolicy::InsurancePolicy(int pNr, string pHolder, double aRate)
{
    policyNr =pNr;
    policyHolder = pHolder;
    annualRate = aRate;

}
InsurancePolicy::~InsurancePolicy(){
 //destructor
}

// Implementation of setPolicy function in the InsurancePolicy class
void InsurancePolicy::setPolicy(int pNr, string pHolder, double aRate) {
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}


void InsurancePolicy::showPolicy(){

    cout << "My policy Number is: " << policyNr << endl;
    cout << "My policyHolder is: " << policyHolder << endl;
    cout << "My Rate is: " << annualRate << endl;

  }


int main(){

    InsurancePolicy myPerson(878778,"Carlos",43.00);
    myPerson.showPolicy();

}
