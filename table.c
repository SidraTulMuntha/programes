#include<stdio.h>
int main()
{
int i = 2 ,j,y;
printf(" MULTIPLICATION  TABLE \n");
for ( i = 2; i <= 10; i++)
{
    for ( j = 1; j <= 10; j++)
    {
        y = i* j;
        printf("%d \t",y);
        j = j + 1;
    }
    
    printf("\n");
}
return 0 ;
}