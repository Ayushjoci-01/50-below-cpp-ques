//manipulators in c++
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a=10;
    float b=124;
    float c=12345;
    cout<<"the value of a without setw"<<a<<endl;
    cout<<"the value of a without setw"<<b<<endl;
    cout<<"the value of a without setw"<<c<<endl;
    cout<<"the value of a with setw"<<setw(100)<<a<<endl;
     cout<<"the value of b with setw"<<setw(100)<<b<<endl;
      cout<<"the value of c with setw"<<setw(100)<<c<<endl;
      return 0;
}