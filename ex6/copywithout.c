/*Excercise 6 Program 3
AUMRUDH LAL KUMAR TJ*/
//Program To compare two strings without using strcmp
#include<stdio.h>
#include<string.h>
main()
{
     int i;
     char s1[20],s2[20];
     printf("Enter the string to be copied\n");
     gets(s1);
     for(i=0;s1[i]!='\0';i++)
       {
         s2[i]=s1[i];
       }
     s2[i]='\0';
     printf("The copied string is %s\n",s2);
}
