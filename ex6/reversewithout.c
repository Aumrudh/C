/*Exercise 6 Program 4
AUMRUDH LAL KUMAR TJ*/
//Program To reverse a string without using strrev function
#include<stdio.h>
#include<string.h>
main()
{
   char string[1000],reverse[1000];
   int i,j,length=0;
   printf("Enter The string \n");
   scanf("%s",string);
   for(i=0;string[i]!=0;i++)
     {
       length++;
     }
   for(i=0,j=length-1;j>=0;i++,j--)
     {
       reverse[i]=string[j];
     }
   reverse[length]='\0';
   printf("The Reversed string is %s\n",reverse);
}
