#include <iostream>
using namespace std;
int main()
{
int row, c, n, temp,i;
cout<<"Enter the number of rows in pyramid of stars you wish to see";
cin>>n;
for ( row = 1 ; row <= n ; row++ )
{
for ( c = 1 ; c <= n-i ; c++ )
printf(" ");
temp--;
for ( c = 1 ; c <= 2*row - 1 ; c++ )
printf("*");
printf("\n");
}
return 0;
}