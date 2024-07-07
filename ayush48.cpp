//Program to display even numbers between n natural number//
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number range";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;

}