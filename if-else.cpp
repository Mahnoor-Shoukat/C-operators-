#include<iostream>
using namespace std;

int main()
{
    int time;
    cout<<"Enter time: "<<endl;
    cin>> time;
    if(time>=12)
    {
       cout<<"The time is "<<time<<"pm"<<endl;
    }
    else
    {
       cout<<"The time is "<<time<<"am"<<endl;
    }
    return 0;
}