/*Exercise 6 Program 2
AUMRUDH LAL KUMAR TJ*/
//Program to check wheather the given string is palindrome or not
#include<stdio.h>
#include<string.h>
main()
{
     char s1[20],s2[20];
     int i,j,length=0; 
     printf("Enter the string\n");
     scanf("%s",s1);
     for(i=0;s1[i]!='\0';i++)
       {
        length++;
       }
     for(i=0,j=length-1;j>=0;i++,j--)
       {
         s2[i]=s1[j];
       }
     s2[length]='\0';
     if(strcmp(s1,s2)==0)
        {
           printf("The given string %s is Palindrome \n",s1);
        }
     else
        {
           printf("The given string %s is not palindrome\n",s1);
        }
}
