/*Exercise 7 Program 7
AUMRUDH LAL KUMAR TJ*/
//Program to calculate standard deivation
#include<stdio.h>
#include<malloc.h>
#include<math.h>
float SD(int*,int,float);
main()
{
     int *a,n,i,sum=0;
     float mean,sd;
     printf("Enter the no of elements\n");
     scanf("%d",&n);
     a=(int*)malloc(sizeof(int)*n);
     printf("Enter the elements\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
        sum=sum+*(a+i);
     }
     mean=sum/n;
     sd=SD(a,n,mean);
     printf("The Standard deviation is %f\n",sd);
}

float SD(int*x,int no ,float m)
{
   float total=0.0,sd;
   int i;
   for(i=0;i<no;i++)
     {
       total+=pow(*(x+i)-m,2);
     }
    sd=sqrt(total/no);
   return sd;
}
