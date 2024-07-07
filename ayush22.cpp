#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int temp;
    cout<<"enter the num1"<<endl;
    cin>>num1;
    cout<<"enter the num2"<<endl;
    cin>>num2;
    cout<<"before shifting number is"<<num1<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after shifting the number is"<<num1<<num2<<endl;
    cout<<"hence prove num1 is depends on the num2";
    return 0;


}