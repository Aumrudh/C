/*Aumrudh Lal Kumar TJ
Exercise 3 Program 3*/
//Program to Print Pattern
#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter the no. of lines for pattern printing\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
       for(j=1;j<=i;j++)
         {
            printf("%d\t",i);
         }
      printf("\n");
     }
}
