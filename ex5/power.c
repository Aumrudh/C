/*Exercise 5 Program 1
Aumrudh lal Kumar TJ*/
//Program to Find Power of a Number Using function
#include<stdio.h>
int power(int,int);
main()
{
  int n,number;
  printf("Enter The Number\n"); 
  scanf("%d",&number);
  printf("Enter the power to which the number is to be raised\n");
  scanf("%d",&n);
  printf("The Power of number %d to power %d is %d\n",number,n,power(number,n));
}

int power(int originalnumber,int originalno)
{
  int result=1,i;
  for(i=1;i<=originalno;i++)
  result=result*originalnumber;
  return result;
}
