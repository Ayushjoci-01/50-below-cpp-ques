#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the n number"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
}