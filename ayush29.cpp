#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter the num1"<<endl;
    cin>>num1;
      cout<<"enter the num2"<<endl;
    cin>>num2;
      cout<<"enter the num3"<<endl;
    cin>>num3;
    if(num1>num2)
    {
        cout<<num1<<"is large";
    }
    else if (num2>num3)
    {
        cout<<num2<<"is large";

    }
    else {
        cout<<num3<<"is large";
    }
}