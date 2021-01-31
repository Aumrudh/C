/*Aumrudh Lal Kumar TJ
Excercise 3 Program 4*/
//Program To check divisiblity by 11 using loop
#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b,n,evensum=0,oddsum=0,diff,rem;
    printf("Enter a  Number\n");
    scanf("%d",&n);
    a=n;
    b=n;
    while(a>0)
     {
       oddsum=oddsum+(a%10);
       a=a/100;
     }
    while(b>0)
     {
       rem=(b%100);
       evensum=evensum+(rem/10);
       b=b/100;
     }
    diff=abs(evensum-oddsum);
    if(diff==0)
     printf("The No %d is Divisible by 11\n",n);
    else
     printf("The no %d is not  divisible by 11\n",n);
}

