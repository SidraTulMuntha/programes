#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values \n");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
    {
    if(b>c)
    printf("%d is 2nd largest",b);
    else
    printf("%d is 2nd largest",c);
    }
else if (b>a && b>c)
    {
     if(a>c)
     printf("%d is 2nd largest",a);
     else
     printf("%d is 2nd largest",c);
    }
else
    {
     if(a>b)
     printf("%d is 2nd largest",b);
     else
     printf("%d is 2nd largest",a);
}    
}