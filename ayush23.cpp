//write a c ++ Program to find the area of a circle and rectangle
#include<iostream>
using namespace std;
const float pi=3.14;
int main()
{
    float re;
    cout<<"enter the redius of the circle "<<endl;
    cin>>re;
    float area=pi*re*re;
    float length,breadth;
    cout<<"enter the length of the rectangle "<<endl;
    cin>>length;
     cout<<"enter the breadth of the rectangle "<<endl;
    cin>>breadth;
    float area2=length*breadth;


    cout<<"so the area of the circle is the "<<area<<endl;
        cout<<"so the area of the circle is the "<<area2<<endl;

    return 0;


    
    
}