/*Exercise 5 Program 4
AUMRUDH LAL KUMAR TJ*/
//Program to sort the elements in ascending order using functions
#include<stdio.h>
void ascendingsort(int[],int);
main()
{
   int i,a[10],n;
   printf("Enter the no. of elements in array\n");
   scanf("%d",&n);
   printf("Enter the numbers to be sorted\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   ascendingsort(a,n);
}

void ascendingsort(int x[],int m)
{
   int i,j,temp;
   for(i=0;i<m;i++)
     {
       for(j=i+1;j<m;j++)
         {
           if((x[i]>x[j]))
             {
               temp=x[i];
               x[i]=x[j];
               x[j]=temp;
             }
         }
      }
    printf("The sorted array is\n");
    for(i=0;i<m;i++)
      {
           printf("%d\t",x[i]);
      }
    printf("\n");
}
