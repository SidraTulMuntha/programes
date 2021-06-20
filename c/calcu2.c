#include<stdio.h>
int main()
{
double a,b;
char operator,yes;


printf("Enter the values : ");
scanf("%lf%lf",&a,&b);
printf("Enter the operator : ");
scanf("%c",&operator);

 do
{
    
 switch(operator)
  {
     case'+': printf("%lf+%lf = %lf",a,b,a+b);
             break;
     case'-': printf(" %lf-%lf = %lf",a,b,a-b);
              break;
     case'*': printf(" %lf*%lf = %lf",a,b,a*b);
              break;
     case'/': printf(" %lf/%lf = %lf",a,b,a/b);
              break;
     
      //operator does not match
         default:printf("error in input");
         break;
  }
}
while(a>0&&b>0);
{
printf("do you want to calculate : ");
scanf("%c",&yes);
}

return 0;
}
