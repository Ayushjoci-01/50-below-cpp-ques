//Write a C program to find whether entered character is small case, capital case, a digit or a special symbol.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the char "<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"so the char has capital case"<<endl;
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"so the char has small case"<<endl;
    }
    else if(ch>='1' && ch<='9')
    {
        cout<<"so the char has digit case"<<endl;
    }
    else
    {
        cout<<"special case"<<endl;
    }

    return 0;
}