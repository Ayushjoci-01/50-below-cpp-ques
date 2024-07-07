//Write a C program which takes no of days as input and convert it into no. of year, month, week, and days
#include<iostream>
using namespace std;
int main()
{
    int days;
    int y,m,w,d;
    cout<<"enter the number of days"<<endl;
    cin>>days;
    y=days/365;
    cout<<"the number of year is "<<y<<endl;
    y=days%365;
    m=days/30;
    cout<<"the number of month is"<<m<<endl;
    m=days%30;
    w=days/7;
    cout<<"the number of weeks is "<<w<<endl;
    w=days%7;
    d=days/7;
    cout<<"the number of dayes is "<<d<<endl;
    d=d%7;
    return 0;


}