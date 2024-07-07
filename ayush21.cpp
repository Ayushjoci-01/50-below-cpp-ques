//write a c++ program to cheak the given age is 18 + or not
#include<iostream>
using namespace std;
int  main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if((age>18) && (age<0))
    {
        cout<<"you are eligibal for the vote"<<endl;
    }
    else if(age==18)
    {
        cout<<"you age is 18"<<endl;
    }
    else{
        cout<<"you are not eligibal for the vote"<<endl;
    }
    cout<<"thank you";
    return 0;
}