Script started on Tue 23 Oct 2018 12:04:47 PM IST
bash-3.2$ cat compare.c
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

bash-3.2$ cc compare.c
bash-3.2$ ./a,[K.out
Enter the 1st String
information
Enter the 2nd string
ino fom rmation
Both Strings are Equal
bash-3.2$ ./a.out
Enter the 1st String
information
Enter the 2nd string
technology
String information is lesser than technology
bash-3.2$ ./a.out
Enter the 1st String
technology
Enter the 2nd string
infomr  rmation
String technology is greater than information
bash-3.2$ cat palindrome.c
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
bash-3.2$ cc a[Kpalindrome.c
bash-3.2$ ./a.out
Enter the string
mom
The given string mom is Palindrome 
bash-3.2$ ./a.out
Enter the string
palindrome
The given string palindrome is not palindrome
bash-3.2$ cc c[K[K[K[Kcat copywithout.c
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
bash-3.2$ cc copywio[Kthout.c
/tmp/ccGhWUzG.o: In function `main':
copywithout.c:(.text+0x17): warning: the `gets' function is dangerous and should not be used.
bash-3.2$ ./a.out
Enter the string to be copied
copy
The copied string is copy
bash-3.2$ ./a.out
Enter the string to be copied
string
The copied string is string
bash-3.2$ cat reversewithout.c
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
bash-3.2$ cc reversewithout.c
bash-3.2$ a[K./a.out
Enter The string 
string
The Reversed string is gnirts
bash-3.2$ /[K./.aout
bash: ./.aout: No such file or directory
bash-3.2$ ./.[Ka.out
Enter The string 
malayalam
The Reversed string is malayalam
bash-3.2$ exit
exit

Script done on Tue 23 Oct 2018 12:07:47 PM IST
