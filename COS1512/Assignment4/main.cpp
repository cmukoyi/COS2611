#include <iostream>
using namespace std;
float raised_to_power(float number, float power)

{

if (power < 0)
    {
        cout << "\nError - can't raise to a negative power\n";
        cout << power << endl;
        cout << number;
        exit(1);

    }
else if (power == 0){
    return 1.0;
}
 else{
    return (number * raised_to_power(number, power - 1));
    }
}

int main()
{
  float answer = raised_to_power(4.0,3);
  cout << answer;
 return 0;
}


