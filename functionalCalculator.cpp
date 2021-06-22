#include<iostream>
using namespace std;
void calculator(int a,int b,char x)//formal parameters 
{
    switch(x)
    {
        case '+' : cout<<a<<" + "<<b<<" = "<<a+b<<'\n';
        break;
         case '-' : cout<<a<<" - "<<b<<" = "<<a-b<<'\n';
        break;
         case '*' : cout<<a<<" * "<<b<<" = "<<a*b<<'\n';
        break;
         case '/' : cout<<a<<" / "<<b<<" = "<<a/b<<'\n';
        break;
        default:cout<<"You have entered the wrong operator \n";
        break;
    }
}
int main()
{
    cout<<"Enter the operands \n";
    int var1,var2;
    cin>>var1>>var2;
    cout<<"Enter the operator \n";
    char opr;
    cin>>opr;
    calculator(var1,var2,opr);//actual parameters

    //ways in which the calculator can be used now

    calculator(var1,var2,opr);//by passing variables
    calculator(10,20,'+');//directly entering the values
    /*
    Main point behind using the function are to reduce the code lines
    */
    return 0;
}