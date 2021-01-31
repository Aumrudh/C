/*Aumrudh Lal Kumar TJ
Exercise 3 Program 1*/
//Program to Check wheather a given number is prime or not
#include<stdio.h>
main()
{
  int n,i=2;
  printf("Enter A number \n");
  scanf("%d",&n);
  while(i<=n/2)
    {
      {
        if((n%i)==0)
        break;
      }
    i++;
    }
   if((n%i)==0)
       printf("The number %d is not prime\n",n);
   else
       printf("The Number %d is prime\n",n);
}
