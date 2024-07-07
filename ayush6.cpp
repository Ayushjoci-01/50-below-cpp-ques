//write a c++ program to WAP to calculate total salary based upon the following:-
//HRA = 3 % of Basic salary, TA = 5 % of Basic salary, DA = 3 % of Basic salary.
#include<iostream>
using namespace std;
int main()
{
    float basic_sarley;
    float total_sarley;
    float hra;
    float ta;
    float da;
    cout<<"enter the basic_sarley";
    cin>>basic_sarley;
    hra=3*basic_sarley/100;
    ta=5*basic_sarley/100;
    da=3*basic_sarley/100;
    basic_sarley=hra+ta+da;
    cout<<"the basic sarley of the employ is "<<basic_sarley<<endl;
    total_sarley=hra+da+ta+basic_sarley;
    cout<<"so the total_sarley of the employ is "<<total_sarley;
    cin>>total_sarley;
    return 0;

}