#include <iostream>

using namespace std;

int numRegistrants;
float amntSeminar;


int main()
{
    cout << "Enter number of resgitrants: "<<endl;
    cin >> numRegistrants;
    if (numRegistrants > 0){
            if(numRegistrants <= 4){
                amntSeminar = 100 * numRegistrants;
                cout << "You owe: R" <<  amntSeminar << endl;
            }else if(numRegistrants >= 5 && numRegistrants <= 10){

                amntSeminar = 80 * numRegistrants;
                cout << "You owe: R" <<  amntSeminar << endl;
            }else{
                amntSeminar = 60 * numRegistrants;
                cout << "You owe: R" <<  amntSeminar << endl;
            }

    }else
    {
        cout << "Error ! Registrants cannot be 0 or less" << endl;

    }
    return 0;
}



