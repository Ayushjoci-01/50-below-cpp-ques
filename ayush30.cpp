//WAP to find the simple interest if principle amount is less than 10000 else find the compound interest//
#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
        float p,r,t,si,ci,amount,a;
        cout<<"enter the amount"<<endl;
        cin>>amount;
        if(amount<10000)
        {
            cout<<"enter the principal,rate,time"<<endl;
            cin>>p>>r>>t;
            si=(p*r*t)/100;
            cout<<"the simple intrest of the amount"<<si<<endl;
        }
        else if (amount>10000)
        {
            
            cout<<"enter the principal,rate,time"<<endl;
            cin>>p>>r>>t;
            si=(p*r*t)/100;
            a=p*pow(1+(r/100),t);
            ci=a-p;
            cout<<"the compound intrest is "<<ci<<endl;

        }
        return 0;
    }
        
        

    