#include<iostream>
using namespace std;

int main()
{
   int time;
cout<<"Enter time in 24-hour clock format: "<<endl;
cin>> time;
if(time=24||time<12)
    {
       cout<<time<<"a.m"<<endl;
       cout<<"Good Morning";
    }
 if(time>=12&&time<24)
    {
        cout<<time<<"p.m"<<endl;
        cout<<"Good evening";
    }
    return 0;
}