#include<stdio.h>
main()
{
   int i,j,n,a[1000],r,m,count=0;
   printf("Enter The Numbery\n");
   scanf("%d",&n);
   m=n;
   for(i=0;n>0;i++)
    {
      r=n%16;
      a[i]=r;
      n=n/16;
    }
   count++;
   printf("The hexadecimal equivalent of %d is\n",m);
    for(j=count-1;j>0;j++)
      /* {
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
         else*/
           printf("%d",a[i]);
      }
     printf("\n");
}
         
                   
