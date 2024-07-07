//given number is odd or even//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<"the given number is even number "<<endl;
    }
    else 
    {
        cout<<"the given number is odd number "<<endl;
    }
    return 0;
}