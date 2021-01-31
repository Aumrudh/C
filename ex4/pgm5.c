/*Exercise 5 Program 5
AUMRUDH LAL KUMAR TJ*/
//Program to Sort the weights in descending order
#include<stdio.h>
main()
{
    int a[100],n,i,j,temp;
    printf("Enter the No. Of Elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array \n");
    for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
     {
       for(j=i+1;j<n;j++)
         {
            if(a[i]<a[j])
               {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
               }
          }
      }
     printf("The sorted Array is \n");
     for(i=0;i<n;i++)
        {
          printf("%d\n",a[i]);
           
        }
}
                          
