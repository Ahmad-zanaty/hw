#include <iostream>
using namespace std;
int main  ()
{
      int nb{0},ng{0},nt{0};
      cout << "enter these three varianle number of boys ,number of girls and number of teachers\n";
      cin >> nb >> ng >> nt ; 
      cout << (nb > 25) << "\n";
      cout << (ng <= 30)<< endl;
      cout << ((nb > 20 && nt > 2)||( ng >30 && nt > 4)) << "\n";
      cout << (nb < 60|| ng < 70)<< "\n";
      cout << (!(nb>=60) && !(ng >= 70))<< "\n"; // notice neither !
      cout << ((nb-10)==ng) << endl;
      cout << (((nb-ng)>10) ||(nt>7)) << "\n";
      cout << ( ((nb-ng)==10) || ((ng-nb)==15)) << "\n";
      








    return 0;
}