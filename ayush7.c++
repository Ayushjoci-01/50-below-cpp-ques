//WAP to find the addition, subtraction, multiplication, division of two numbers.//
#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    float sum;
    float sub;
    float mul;
    float div;
    cout<<"enter the num1";
    cin>>num1;
    cout<<"enter the num2" ;
    cin>>num2;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    cout<<"the sum,sub,mul,div of the two number is"<<sum;
    cout<<"\nthe sum,sub,mul,div of the two number is"<<sub;
    cout<<"\nthe sum,sub,mul,div of the two number is"<<mul;
    cout<<"\nthe sum,sub,mul,div of the two number is"<<div;
    return 0;

}