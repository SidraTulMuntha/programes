/*

prime no. printing 
form user start to user end

use of a function 
directly use of nested loop

*/
#include<stdio.h>
void prime(int n)//n=i n==1
{
   int x;
    _Bool flag =1;//true false 1 ->true 
    for(int i=2;i<=n/2;i++)// 10 1 2 3 4 5
    {
        if(n%i==0)
        {
            flag=0;//flag false
            break;
        }
    }
    if(flag==1)//flag true prime no
    {
        printf("%d is a prime number \n",n);
    }
    else//false not prime
    {
       printf("%d is not a prime number \n",n);
    }
}
int main()
{
    printf("Enter the values to print prime numbers from and to \n");
  //Start 1
  //end 10
   int start ,ending;
   scanf("%d%d",&start,&ending);
   //enter
   for(int i=start;i<=ending;i++)
   {//start - end 1 2 3 4 5 6 7 8 9 10
       prime(i);//prime no 
       //not a prime number 
       printf("\n");
   }
   return 0;
}