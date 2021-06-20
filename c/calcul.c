#include <stdio.h>
void main()
{
char operator;
double a,b;
printf("enter the operator\n");
scanf("%c",&operator);
printf("enter the values\n");
scanf("%lf%lf",&a,&b);
   switch(operator)
   {
    case'+': printf("sum of two numbers\n %lf+%lf=%.2lf",a,b,a+b);
    break;
    case'-': printf("subtraction of two numbers\n %lf-%lf=%.2lf",a,b,a-b);
    break;
    case'*': printf("multiplication of two numbers\n %lf*%lf=%.2lf",a,b,a*b);
    break;
    case'/': printf("division of two numbers\n %lf/%lf=%.2lf",a,b,a/b);
    break;
        // operator doesn't match any case constant 
    default:printf("eror in input");
    break;
   }
}
