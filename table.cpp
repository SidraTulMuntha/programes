#include<iostream>
using namespace std;
int main()
{
   cout<<"Printing the tables from 2 to 20 \n";
   //loop 2 to 20
   //loop inside 1 to 10

   for(int i=2;i<=20;i++)
   {
      for(int j=1;j<=10;j++)
      {
         cout<<i<<" * "<<j<<" = "<<i*j<<'\n';
      }
      cout<<"_________________________"<<'\n';
   }
}