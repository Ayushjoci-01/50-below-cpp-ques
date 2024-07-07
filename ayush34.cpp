#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    
}