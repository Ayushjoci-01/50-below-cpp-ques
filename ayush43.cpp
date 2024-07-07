//Write a C program to check whether entered year is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%400==0)
    {
        cout<<"so the year is leep year"<<endl;
    }
    else if(year%4==0)
    {
        cout<<"so the year is leep year"<<endl;
    }
    else if(year%100==0)
     {
        cout<<"so the year is not a leep year"<<endl;
    }
   


}