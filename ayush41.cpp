// Write a C program to calculate bill according to following:
// Uttarakhand state electricity board bill is generated on following basis:
// if units are less than equal to 1000, rate is 5 rs/unit
// if units are greater than 1000 and less than or equal to 2000, rate is 6 rs/unit
// if units are greater than 2000, rate is 7 rs/unit
#include<iostream>
using namespace std;
int main()
{
    float bill,rate,unit;
    cout<<"enter the bill amount"<<endl;
    cin>>unit;
    if(unit<=1000)
    {
        rate=5;
    }
    else if(unit>1000 && unit<=2000)
    {
        rate=6;
    }
    else if(unit>=2000)
    {
        rate=7;
    }
    bill=rate*unit;
    cout<<"so the bill is "<<bill<<endl;
    return 0;
}