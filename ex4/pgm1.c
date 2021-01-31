/*AUMRUDH LAL KUMAR TJ 
Exercise 4 Program 1*/
//Program to convert decimal to hexadecimal
#include<stdio.h>
main()
{
  int m,n,i,a[1000],r,count=0;
  printf("Enter a number \n" );
  scanf("%d",&n);
  m=n;
   for(i=0;n>0;i++)
     {
      r=n%16;
      a[i]=r;
      n/=16;
     }
  count++;
  printf("The hexadecimal equivalent for %d is\n",m);
   for(i=count--;i>=0;i--)
     {
       if(a[i]==10)
         printf("A");
       else if(a[i]==11)
         printf("B");
       else if(a[i]==12)
         printf("C");
       else if(a[i]==13)
         printf("D");
       else if(a[i]==14)
         printf("E");
       else if(a[i]==15)
         printf("F");
       else 
         printf("%d",a[i]);

     }
   printf("\n");
}
       

