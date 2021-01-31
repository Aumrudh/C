/*Exercise 10 Program 2
AUMRUDH LAL KUMAR TJ*/
//Program to count words,lines characters 
#include<stdio.h>
main()
{
    char ch,name[20];
    int ccount=0,lcount=0,wcount=0;
    FILE *fp;
    printf("Enter file name\n");
    scanf("%s",name);
    fp=fopen(name,"r");
    ch=getc(fp);
    while(ch!=EOF)
    {
     ccount++;
       if(ch=='\n')
        {
          lcount++;
        }
       if(ch==' ')
        {
          wcount++;
        }
    ch=getc(fp);
   }
   printf("Total no of words,characters,lines is %d %d %d\n",wcount,ccount,lcount);
   fclose(fp);
} 
   
