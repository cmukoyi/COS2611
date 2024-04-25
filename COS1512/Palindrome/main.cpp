#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char str1[8], str2[8];
    int Checker =0;
    int lenght;

    cout << "Enter the first , then second \n";
    cin >> str1 >> str2;

    strcat(str1,str2);

    cout << "strcat(str1,str2)" << str1 <<endl;

    lenght = strlen(str1);
    for(int i = 0; i < lenght;i++ ){
        if (str1[i] != str1[lenght - i -1]){

            Checker = 1;
            break;
        }
    }
        if (Checker == 1){
            cout << str1 << " is not a palindrome";
        }else{
            cout << str1 << " is a palindrome";
        }


    return 0;
}
