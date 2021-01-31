/*Excercise 10 Program 3
AUMRUDH LAL KUMAR TJ*/
//Program to merge two files
#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp1,*fp2,*fp3;
    char c,fname1[20],fname2[20],fname3[20];
    printf("Enter the file Name1 \n");
    scanf("%s",fname1);
    printf("Enter the file Name2 \n");
    scanf("%s",fname2);
    printf("Enter the file Name3 \n");
    scanf("%s",fname3);   
    fp1=fopen(fname1,"r");
    fp2=fopen(fname2,"r");
    fp3=fopen(fname3,"w");
    if(fp1==NULL)
       {
         puts("File unable to open\n");
         exit(1);
       }
    if(fp2==NULL)
       {
         puts("File unable to open\n");
         exit(1);
       }
     if(fp3==NULL)
       {
         puts("File unable to open\n");
         exit(1);
       }
    c=getc(fp1);
    while(c!=EOF)
      {
        putc(c,fp3);
        c=getc(fp1);
      }
    c=getc(fp2);
    while(c!=EOF)
      {
        putc(c,fp3);
        c=getc(fp2);
      }
    puts("Merged Successfully\n");
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
}
