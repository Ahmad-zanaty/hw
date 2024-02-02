#include <iostream>
using namespace std;
int main ()
{
int num1 , num2,low;
      cout << "enter start num and final num to sum that between them \"positive numbers\"\n"; 
       cin >> num1 >> num2 ;
       low = num2*(num2+1)/2 - (num1-1)*num1/2;
    
     cout <<"sum from 1 to num2: " << num2*(num2+1)/2 << endl;
     cout << "sum from num1 to num2: " <<low ;



return 0;

}