#include<stdio.h>
#include<string.h>
main()
{
   char s1[20],s2[20]; 
   printf("Enter a string\n");
   scanf("%s",s1);
   strrev(s1);
   s2=strrev(s1);
   if(strcmp(s1,s2)==0)
    printf("palindrome\n");
   else
    printf("Not a palindrome\n");
}
