#include<stdio.h>
void main()
{
int yr;
printf("entr the year\n");
scanf("%d",&yr);
if (yr%4==0)
 { 
  if (yr%100==0)
   {
    if (yr%400==0)
  printf("%d is a leap year",yr);
  else
  printf("%d is not a leap year",yr);
   }
   else
   {
   printf("%d is a leap year",yr);
   }
   }
else
{
printf("%d is not a leap year",yr);
}
}