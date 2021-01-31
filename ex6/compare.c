/*Exercise 6 Program 1
AUMRUDH LAL KUMAR TJ*/
//Program to compare two strings
#include<stdio.h>
#include<string.h>
main()
{
     char s1[20],s2[20];
     printf("Enter the 1st String\n");
     scanf("%s",s1);
     printf("Enter the 2nd string\n");
     scanf("%s",s2);
     if(strcmp(s1,s2)==0)
       {
         printf("Both Strings are Equal\n");
       }
    else if(strcmp(s1,s2)>0)
       {
         printf("String %s is greater than %s\n",s1,s2);
       }
    else
       {
         printf("String %s is lesser than %s\n",s1,s2);
       }
}

