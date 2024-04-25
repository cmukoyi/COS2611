#include <iostream>

using namespace std;

struct pixel

 {

int c, r;

 };
void display(pixel p)

{

cout << "col "<< p.c << " row " << p.r << endl;

}
int main()

{ pixel x = {40,50}, y, z;

z = x;

x.c += 10;

    y = z;

    y.c += 10;

    y.r += 20;

    z.c -= 15;

    display(x);

    display(y);

    display(z);
    return 0;

    }


