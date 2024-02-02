#include <iostream>
using namespace std;
int main (){
   int var1,var2,var3;
   cout << "enter value for the two variable \n";
   cin >> var1 >> var2;
   var3=var1,var1=var2,var2=var3;
   
   cout << "var1 swapped from var2 " << var1 << endl;
   cout << "var2 swapped from var1 " << var2 << endl;



    return 0;
}