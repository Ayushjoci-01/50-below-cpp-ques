#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    if(num>0)
    {
        cout<<"the given number is posative number\n";

    }
    else if(num<0)
    {
        cout<<"the given number is negative number";
    }
    else if (num==0)
    {
        cout<<"the given number is zero";

    }
    return 0;
}