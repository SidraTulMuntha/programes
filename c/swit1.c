#include<stdio.h>
void main()
{
char ch;
printf("enter the alphabet\n",ch);
scanf("%c",&ch);
if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
    switch(ch)
     {
     case'a': printf("%c is a vowel",ch);
     break;
     case'e': printf("%c is a vowel",ch);
     break;
     case'i': printf("%c is a vowel",ch);
     break;
     case'o': printf("%c is a vowel",ch);
     break;
     case'u': printf("%c is a vowel",ch);
     break;
     case'A': printf("%c is a vowel",ch);
     break;
     case'E': printf("%c is a vowel",ch);
     break;
     case'I': printf("%c is a vowel",ch);
     break;
     case'O': printf("%c is a vowel",ch);
     break;
     case'U': printf("%c is a vowel",ch);
     break;
     default: printf("%c is a consonent",ch);
     break;
     }
}
else
printf("worng input");
}