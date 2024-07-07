// Write a C program to find grade of the student for four subjects marks for each subject to be entered by the
// user. Calculate percentage and based upon the condition print the grade.
// Per>=85 grade=A
// Per<85 and per>=70 grade=B
// Per<70and per>=55 grade=C
// Per<55 grade=D
#include<iostream>
using namespace std;
int main()
{
    float s1,s2,s3,s4,per;
    cout<<"enter the number of 4 sub"<<endl;
    cin>>s1>>s2>>s3>>s4;
    per=(s1+s2+s3+s4)*100/400;
    if(per>=85)
    {
        cout<<"grade A"<<endl;
    }
    else if(per<85 && per>=55)
    {
        cout<<"grade B"<<endl;
    }
    else if(per<70 && per>=70)
    {
        cout<<"grade C"<<endl;
    }
    else if(per<=55)
    {
        cout<<"grade D"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }
    cout<<"so the per is "<<per<<endl;

}