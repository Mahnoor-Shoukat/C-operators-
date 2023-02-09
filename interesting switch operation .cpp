#include<iostream>
using namespace std;

int main()
{
int m;
cout<<"Enter a number from 1to3:\n";
cin>>m;
switch (m)
{
case 1:
cout<<"The number is first.";
break ;
case 2:
cout<<"The number is second.";
break ;
case 3:
cout<<"The number is third.";
break ;
default:
cout<<"invalid number.";
break ;
}
return 0;
}