/*Exercise 7 Program 5
AUMRUDH LAL KUMAR TJ*/
//Program to search string
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
main()
{
   char **ptr,key[20];
   int i,j,n,size=20,found=0;
   printf("Enter the No of string\n");
   scanf("%d",&n);
   ptr=(char**)malloc(sizeof(char)*n);
   if(!ptr)
    {
      printf("Out of memory\n");
      exit(1);
    }
   for(i=0;i<n;i++)
    {
     ptr[i]=(char**)malloc(sizeof(char)*size);
    }
   printf("Enter %d strings\n",n);
   for(i=0;i<n;i++)
    {
     scanf("%s",ptr[i]);
    }
    printf("Enter the name to be searched\n");
    scanf("%s",key);
    for(i=0;i<n;i++)
     {
       if(strcmp(ptr[i],key)==0)
        {
         found=1;
         break;
        }
     }
    if(found==1)
    printf("\nThe given string %s is found at %d\n",key,i+1);
    else
      printf("The given string is not found\n");
     free(ptr);
}
