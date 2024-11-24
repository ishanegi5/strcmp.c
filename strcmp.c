#include<stdio.h>
void main()
{
    char *str1="hallo";
    char *str2="hello";
    while(*str1&&*str2)
    {
        if(*str1!=*str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    
    if(*str1==*str2)
    {
        printf("both strings are equal!");
    }
    else if(*str1<*str2)
    {
        printf("str2 is greater than str1.");
    }
    else
     {   printf("str1 is greater than str2.");
     }
}
