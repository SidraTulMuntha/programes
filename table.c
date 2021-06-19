#include<stdio.h>
int main()
{

    printf("Now we will be printing the tables from 2 top 20 \n");
    for(int i=2;i<=20;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d \n",i,j,i*j);
        }
        printf("_________________________ \n");
    }
}