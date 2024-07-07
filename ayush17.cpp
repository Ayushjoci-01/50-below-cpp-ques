//write a c++ program to find out the area of the circle//
#include<iostream>
using namespace std;
int main()
{
    const float pi=3.14;
    double redius;
    double area;
    cout<<"enter the rediuds of the circle"<<endl;
    cin>>redius;
    area=pi*redius*redius;
    cout<<"the area of the circle is "<<area;
    return 0;


}