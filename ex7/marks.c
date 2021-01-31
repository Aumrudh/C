/*Exercise 7 program 4
AUMRUDH LAL KUMAR TJ*/
//Program to calcute tot marks and increse sub during runtime
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
main()
{
  int *marks,i,tot=0,n,m,additional;
  int ch;
  printf("Enter the number of subjects\n");
  scanf("%d",&n);
  marks=(int*)malloc(n*sizeof(int));
  printf("Enter the marks\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&marks[i]);
    tot+=marks[i];
  }
  for(i=0;i<n;i++)
    {
      printf("Subject %d mark =%d\n",i+1,marks[i]);
    }
  printf("The Total marks of %d subject are %d\n",n,tot);
  printf("Do you want to add more no. of subjects? type 1 for yes \n");
  scanf("%d",&ch);
  if(ch==1)
     {
       printf("Enter the addtional no of subjects\n");
       scanf("%d",&additional);
       m=n+additional;
       marks=realloc(marks,sizeof(int)*m);
       printf("Enter the %d marks\n",additional);
       for(i=n;i<m;i++)
         {
           scanf("%d",&marks[i]);
           tot=tot+marks[i];
         }
    
   for(i=0;i<m;i++)
     {
       printf("Subject %d mark =%d\n",i+1,marks[i]);
     }
   printf("Total Marks of %d subject is %d\n",m,tot);
free(marks);
} 
}                                                                                                                                   
