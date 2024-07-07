//globle veriable and scope resulation oprator
#include<iostream>
using namespace std;
int c=45;//declear the globle veriable//

int main()
    {
        int a,b,c;
    
        cout<<"enter the value of a ";
        cin>>a;
        cout<<"enter the value of b";
        cin>>b;
        c=a+b;
        cout<<"the sum of the a and b is "<<c<<endl;
        cout<<"the globle veriable is "<<::c;

        return 0;

    }