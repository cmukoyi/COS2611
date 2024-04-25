#include <iostream>
using namespace std;
void encrypt(char theChar[])
{
           for (int i = 0; theChar[i] != '\0'; i += 2)
                     if (theChar[i] == 'A' || theChar[i] == 'E')
                             theChar[i] = '#';
                     else if (islower(theChar[i]))
                             theChar[i] = toupper(theChar[i]);
                      else
                             theChar[i] = '@';
}
int main()
{
         char text[]="SaVE EArtH";
         encrypt(text);
         cout << text << endl;
         return 0;
}
