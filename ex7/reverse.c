/*Exercise 7 Program 3
AUMRUDH LAL KUMAR TJ*/
//Program to reverse a string using pointer
#include<stdio.h>
#include<string.h>
void reverse(char*);
main()
{
    char str[20];
    printf("Enter the string\n");
    scanf("%s",str);
    reverse(str);
    printf("The reversed string is %s\n",str);
}

void reverse(char*string)
{
   char *first,*last,temp;
   int length;
   length=strlen(string);
   first=string;
   last=&string[length-1];
   while(first<last)
     {
       temp=*first;
       *first=*last;
       *last=temp;
       first++;
       last--;
     }
}
