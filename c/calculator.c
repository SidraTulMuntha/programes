#include<stdio.h>
int main()
{
    char chr;
    do
    {

        //calculator code is started 
         double a,b;
    printf("Enter the two operands \n");
    scanf("%lf%lf",&a,&b);
    oprAgain:
    char opr;
    printf("Enter the operator \n");
    scanf("%c",&opr);
    switch (opr)
    {
    case '+' : printf("%lf * %lf = %lf",a,b,a+b);
        break;
    case '-' : printf("%lf * %lf = %lf",a,b,a-b);
    break;
    case '*' : printf("%lf * %lf = %lf",a,b,a*b);
    break;
    case '/' : printf("%lf * %lf = %lf",a,b,a/b);
    break;
    
    default:
    goto oprAgain;
        break;
    }
       //calculator code ends

       //logic for running again
    runlogicback:
       printf("Do you want to run the calculator again \n");
       scanf("%c",&chr);

       if(chr!='Y'&&chr!='y'&&chr!='N'&&chr!='n')
       {
           goto runlogicback;
       }

    } while (chr=='Y'||chr=='y');
    
   
    return 0;
}

/*

1. Ambiguous match
2. chr=='Y' && chr=='y'

*/
