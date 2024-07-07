#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the char"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='A' || ch=='e'|| ch=='E' || ch=='i'|| ch=='I' || ch=='o' ||ch=='O'|| ch=='u'|| ch=='U')
    {
        cout<<"the char is vowel"<<endl;
    }
    else 
    {
        cout<<"the char is consonent"<<endl;
    }
}