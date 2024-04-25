#include <iostream>

using namespace std;

struct play

{

int score, bonus;

};
void calculate(play &p, int n = 10)

{

        p.score++;

        p.bonus += n;

}
int main()

 {

      play pl = {10, 15};

      calculate(pl, 5);

       cout << pl.score << ":" << pl.bonus << endl;

       calculate(pl);
       cout << pl.score << ":" << pl.bonus << endl;

       calculate(pl, 15);

       cout << pl.score << ":" << pl.bonus << endl;
       return 0;

 }
