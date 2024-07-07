//write a c++ program to derive simple intrest and compound intrest//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float principal;
    float rate;
    float time;
    float simple_intrest;
    float a;
    float compound_intrest;

    cout<<"enter the principal ";
    cin>>principal;
    cout<<"enter the rate";
    cin>>rate;
    cout<<"enter the time";
    cin>>time;
    simple_intrest=principal*rate*time/100;
    cout<<"the simple_intrest is "<<simple_intrest;
    a=principal*pow(1+(rate/100),time);
    compound_intrest=a-principal;
    cout<<"\nthe compound intrest is "<<compound_intrest;
    return 0;



}