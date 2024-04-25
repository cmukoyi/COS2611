#include <iostream>

using namespace std;

struct myBox {

     int length, breadth, height;

};
void dimension (myBox M)

{

     cout << M.length << "x" << M.breadth << "x";

     cout << M.height << endl;

 }
      int main ()

     {

     myBox B1 = {10, 15, 5}, B2, B3; ++B1.height; dimension(B1);

     B3 = B1; ++B3.length;

     B3.breadth++;

     dimension(B3); B2 = B3;

      B2.height += 5;

       B2.length--;

       dimension(B2);
       return 0;

 }
