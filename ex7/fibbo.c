/*Exercise 7 Program 2
AUMRUDH LAL KUMAR*/
//Program to Generate fibbanacci series using pointer
#include<stdio.h>
#include<malloc.h>
main()
{
   int n,first,second,i,*ptr;
   first=0;second=1;
   printf("Enter the no of terms\n");
   scanf("%d",&n);
   ptr=(int*)malloc(sizeof(int)*n);
   *(ptr+0)=0;
   *(ptr+1)=1;
   for(i=2;i<n;i++)
     {
       *(ptr+i)=first+second;
       first=second;
       second=*(ptr+i);
     }
   for(i=0;i<n;i++)
    printf("%d\t",*(ptr+i));
    printf("\n");
}
