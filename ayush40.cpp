#include<iostream>
using namespace std;
int main()
{
    float a,b,c,r1,r2,D;
    cout<<"enter the equation"<<endl;
    cin>>a>>b>>c;
    D=b*b-4*a*c;//3*3-4*1*1
    if(D>0)
    {
        r1=(-b+4*a*c)/2*a;
        r2=(b+4*a*c)/2*a;
        cout<<"the roots answer is"<<r1<<endl;
        cout<<"the roots answer is"<<r2<<endl;
    }
    else{
        cout<<"the roots are real"<<endl;
    }
    return 0;


}