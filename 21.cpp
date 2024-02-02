#include <iostream>
using namespace std;
int main ()
{
int number{0} ;
cout << "enter one number  and if print \"1\" number is even \"0\" is odd\n";
cin >> number ;
cout << ( number % 2 == 0 ) << endl;
// another sol
float te_st =(float)(number /2.0);
  cout << ((te_st-int(te_st))==0) ;
  

    return 0;
}