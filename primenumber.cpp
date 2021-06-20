#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char runagain;
int main()
{
   do
   {
        float a,b;
   cout<<"Enter the operands \n";
   cin>>a>>b;
   char op;
   gotoop:
   cout<<"Enter the operator \n";
   cin>>op;
   switch (op)
   {
       case '+' : cout<<a<<" + "<<b<<" = "<<a+b<<'\n';
       break;//string literal
       case '-' : cout<<a<<" - "<<b<<" = "<<a-b<<'\n';
       break;
       case '*' : cout<<a<<" * "<<b<<" = "<<a*b<<'\n'; 
       break;
       case '/' : cout<<a<<" / "<<b<<" = "<<a/b<<'\n';
       break;
   
   default:
     goto gotoop;
       break;
   }
   runagainlabel:
   
   cout<<"Enter Y for running again and Enter N for exiting \n";
   cin>>runagain;
   if(runagain !='Y' && runagain !='y' && runagain !='N' && runagain !='n')
   {
       goto runagainlabel;
   }
   } while(runagain == 'Y' || runagain == 'y');//condition match runs again condition false break
}