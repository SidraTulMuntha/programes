#include<iostream>
using namespace std;
void prime(int n)
{
    int x;
    bool flag = true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"This "<<n<<" is the prime number ";
    }
    else
    {
        cout<<"This "<<n<<" is not the prime number ";
    }
}
int main()
{
    int start, ending;
    cout<<"Enter the user start and the end ";
    cin>>start>>ending;
    for(int i=start;i<=ending;i++)
    {
        prime(i);
        cout<<'\n';
    }
    return 0;
}