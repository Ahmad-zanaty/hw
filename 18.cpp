#include <iostream>
using namespace std;
int main ()
{
  float num1 ,num2 ,num3 ,num4 ,num5;
  cout << "enter five numbers" ;
  cin >>num1>> num2>> num3>> num4>> num5;
    float average =(num1+num2+num3+num4+num5)/5;
    float three_two= (num1+num2+num3)/(num4+num5);
    float ave_three_two=(2*(num1+num2+num3))/((num4+num5)*3);\
    cout <<average << endl<< three_two << endl << ave_three_two;
     // mathimatical relation is =3/2




    return 0;
}