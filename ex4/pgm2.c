/*Exercise 4 Program 2
AUMRUDH LAL KUMAR TJ*/
//Program to check wheather roll no is present or not
#include<stdio.h>
main()
{
   int i,n,a[10],key,found;
   printf("Enter the Number the Element \n");
   scanf("%d",&n);
   printf("Enter the Roll Numbers\n");
   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter The element To be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
      {
       if(key==a[i])
        { 
          found=1;
        }
      }
    if(found==1)
    {
      printf("The Roll No is Present\n");
    }
    else
    {
      printf("The Roll No is Not Present\n");
    }
}
