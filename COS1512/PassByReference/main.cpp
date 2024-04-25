#include <iostream>

using namespace std;

void swop(int& no1, int& no2){ //pass by reference
    int temp = no1 ;
    no1 = no2;
    no2 = temp;


}
int main()
{
    int num1,num2;
    cout << "Enter Num1 " << endl;
    cin >> num1;
    cout << "Enter Num2 " << endl;
    cin >> num2;
    cout << "Num1 before swop is :" << num1 << " and Num2 is " << num2 << endl;
    swop (num1,num2);
    cout << "Num1 after swop is : " << num1 << " and Num2 is " << num2 << endl;
    return 0;
}
