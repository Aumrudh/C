/*Exercise 5 Program 3
AUMRUDH LAL KUMAR TJ*/
//Program to calculate minimum number in an array
#include<stdio.h>
int minimumnumber(int[],int);
main()
{
   int a[10],n,i;
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
   printf("Enter the elements in array\n");
   for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
   printf("The minimum number in array is %d\n",minimumnumber(a,n));
}

int minimumnumber(int x[],int m)
{
    int minimum=x[0];
    int i;
    for(i=0;i<m;i++)
     {
        if(x[i]<minimum)
          {
             minimum=x[i];
          }
     }
    return minimum;
}
