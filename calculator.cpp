#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter the operands \n";
    cin>>a>>b;
    cout<<"Enter an operator \n";
    char c;
    cin>>c;
    switch (c)
    {
    case '+' : cout<<a<<" + "<<b<<" = "<<a+b<<'\n';
        break;
    case '-' : cout<<a<<" - "<<b<<" = "<<a-b<<'\n';
        break;
    case '*' : cout<<a<<" * "<<b<<" = "<<a*b<<'\n';
        break;
    case '/' : cout<<a<<" / "<<b<<" = "<<a/b<<'\n';
        break;
    
    default:
    cout<<"Tumne jo enter kraya hai wo galat hai \n";
        break;
    }
}