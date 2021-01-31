/*Exercise 5 Program 6
AUMRUDH LAL KUMAR TJ
Program to Print how many times 2,3,..12
has occured when 100 times two dies is rolled*/
#include<stdio.h>
#include<stdlib.h>
main()
{
   int i,m,n,a[13];
   for(i=2;i<=12;i++)
     {
       a[i]=0;
     }
  for(i=0;i<100;i++)
    {
      m=rand()%6+1;
      n=rand()%6+1;
      a[m+n]+=1;
    }
  for(i=2;i<=12;i++)
    {
      printf("The no of times sum of %d has occured is %d\n",i,a[i]);
    }
}
