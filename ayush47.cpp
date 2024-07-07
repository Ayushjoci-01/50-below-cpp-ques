//Write a C program to find the sum of first n numbers using for loop.//
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the n number"<<endl;
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        sum=sum+i;
    }
    cout<<"the sum of the number is "<<sum<<endl;
    return 0;
}