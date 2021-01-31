/*Exercise 5 Program 5
AUMRUDH LAL KUMAR TJ*/
//Program to Find GCD
#include<stdio.h>
int gcd(int,int);
main()
{
   int number1,number2;
   printf("Enter the 2 Numbers\n");
   scanf("%d%d",&number1,&number2);
   printf("The gcd of (%d,%d) is %d\n",number1,number2,gcd(number1,number2));
}

int gcd(int a,int b)
{
   int rem;
   rem=a%b;
   if(rem==0)
    {
      return b;
    }
   else 
    {
      return gcd(a,rem);
    }
}
