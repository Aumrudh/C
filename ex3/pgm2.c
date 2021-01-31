/*Aumrudh Lal Kumt TJ
Exercise 3 Program 2*/
//Program to find sum of digits
#include<stdio.h>
main()
{
  int n,r,sum,a;
  printf("Enter  Number\n");
  scanf("%d",&n);
  a=n;
  for(sum=0;n!=0;n=n/10)
    {
      r=n%10;
      sum+=r;
    }
  printf("The sum of digit of number %d is %d\n",a,sum);
}
