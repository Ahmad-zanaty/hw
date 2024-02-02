#include <iostream>
#include <limits>
using namespace std;
int main (){

    
    string name1,name2;
     int id1{0},id2{0};
      float gra1{0},gra2{0};
    cout << " student 1 enter your name ,id and mathgrade\n";
    cin >>name1>>id1>>gra1;
    cout << " student 2 enter your name ,id and mathrade\n";
    cin >> name2 >>id2 >>gra2;
    cout <<"name stu one is " <<name1<<endl<< "name stu two is "<<name2<< endl<<"id stu one is "<<id1 <<endl<<"id stu two is "<<id2<<endl<<"grade stu one is "<<gra1<<endl<<"grade stu two is "<<gra2<<endl;
       cout << (gra1+gra2)/2;
            return 0;
            }