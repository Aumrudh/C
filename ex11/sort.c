/*Exercise 11 Program 1
AUMRUDH LAL KUMAR TJ*/
#include<stdio.h>
#include<stdlib.h>
struct item
{
  int ino;
  char name[20];
}it[20],temp;
main()
{
   FILE *fp;
   int i,j,n;
   fp=fopen("Itemlist.dat","wb");
   if(fp==NULL)
     {
       puts("File cant be opened\n");
       exit(1);
     }
   printf("Enter the no of items\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      {
        printf("Enter Item no\n");
        scanf("%d",&it[i].ino);
        printf("Enter Item name\n");
        scanf("%s",it[i].name);
        fprintf(fp,"%d\t%s",it[i].ino,it[i].name);
      }
   for(i=0;i<n;i++)
      {
        fscanf(fp,"%d\t%s",&it[i].ino,it[i].name);
        for(j=i+1;j<n;j++)
         {
           fscanf(fp,"%d\t%s",&it[i].ino,it[i].name);
        if(strcmp(it[i].name,it[j].name)>0)
         {
           temp=it[i];
           it[i]=it[j];
           it[j]=temp;
         }

         }
      }
    for(i=0;i<n;i++)
      {
        printf("%d.%s\n",it[i].ino,it[i].name);
      }
    fclose(fp);
}



