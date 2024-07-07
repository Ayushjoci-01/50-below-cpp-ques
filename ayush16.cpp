//another example of type casting in c++
#include<iostream>
using namespace std;
int main()
{
    float a=13.90,b=12.90;
    cout<<"the value of and b is "<<a+b<<endl;
    cout<<"the value of a and b is "<<int (a)+int (b)<<endl;
    cout<<"the value of a and b is"<<a+int(b);
    return 0;

}