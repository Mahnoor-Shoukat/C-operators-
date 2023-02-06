#include<iostream>
using namespace std;

int main()
{
int time;
cout<<"Enter time "<<endl;
cin>>time;
if(time<=12)
{
cout<<time<<"am\n";
cout<<"Good morning"<<endl;
}
else if(time<16&&time>12)
{
cout<<time<<"p.m\n";
cout<<"Good noon"<<endl;
}
else if(time<19&&time>16)
{
cout<<time<<"pm\n";
cout<<"Good evening"<<endl;
}
else
{cout<<time<<"p.m\n";
cout<<"Good night"<<endl;
}
return 0;
}