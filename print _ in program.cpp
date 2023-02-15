#include<iostream>
using namespace std;

int main()
{
  int m,n,k;
  for(m=1;m<=6;m++)
   {
     for(n=6;n>=m;n--)
     {
       cout<<" ";
       }
    for(k=1;k<=m;k++)
     {
    cout<<"*";
     }
    cout<<"\n";
   }
   return 0;
 }