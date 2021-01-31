/*Exercise 7 Program 6
AUMRUDH LAL KUMAR TJ*/
//Program to allocate roll nos
#include<stdio.h>
#include<malloc.h>
main()
{
   int *roll1,*roll2,n,i,j,k,start;
   printf("Enter the number of students\n");
   scanf("%d",&n);
   printf("Enter the starting roll no\n");
   scanf("%d",&start);
   roll1=(int*)malloc(sizeof(int)*(n/2));
   if(n%2==0)
    {
     roll2=(int*)malloc(sizeof(int)*(n/2));
    }
   else
    {
      roll2=(int*)malloc(sizeof(int)*(n/2+1));\
    }
   for(i=0;start<=n;start++)
     {
       if(start%2==0)
          {
            roll1[i]=start;
            i++;
          }
       else
         {
           roll2[j]=start;
           j++;
         }
     }
    printf("Students roll nos allocated for even staffs\n");
    for(k=0;k<i;k++)
      {
        printf("%d\t",roll1[k]);
      }
     printf("\nStudents roll nos allocated for odd staffs\n");
    for(k=0;k<j;k++)
      {
        printf("%d\t",roll2[k]);
      }
    printf("\n");
}
