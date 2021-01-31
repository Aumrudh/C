/*Exercise 11 Program 2
AUMRUDH LAL KUMAR*/
//Library Search
#include<stdio.h>
#include<stdlib.h>
typedef struct bookdetails
{
  int accno;
  char name[20];
  char author[20];
  char pub[20];
}book;
main()
{
   int i,n;
   FILE *fp;
   book b[20];
   char search[20];
   fp=fopen("Book.dat","wb");
   printf("Enter the no of book\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     {
       printf("Enter access no\n");
       scanf("%d",&b[i].accno);
       printf("Enter book title\n");
       scanf("%s",b[i].name);
       printf("Enter author name\n");
       scanf("%s",b[i].author);
       printf("Enter publisher nameo\n");
       scanf("%s",b[i].pub);
       fwrite(&b[i],sizeof(book),1,fp);
     }
    printf("Enter the Book titile to be searched\n");
    scanf("%s",search);
    for(i=0;i<n;i++)
      {
        fread(&b[i],sizeof(book),1,fp);
        if(strcmp(b[i].name,search)==0)
           {
            printf("The Book is available\n");
            break;
           }
        else
          printf("The book is unavailable\n");
      }
    fclose(fp);
}

