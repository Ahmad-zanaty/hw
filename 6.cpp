#include <iostream>
#include <limits>
using namespace std;
int main (){

     int num1{0},num2{0};
    cout << "pls enter two numbers";
    cin >> num1 >> num2;
    cout <<"add"<< num1+num2 << endl <<"sud"<< num1 - num2 << endl 
    <<"mult"<< num1 * num2 << endl <<"div"<<  (float)num1 /num2;
    
  
        return 0;
}