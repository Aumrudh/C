/*Exercise 10 Program 1
AUMRUDH LAL KUMAR TJ*/
#include<ctype.h>
#include<stdio.h>
main()
{
char ch,name[20],ch1;
FILE *fp;
int n=0;
printf("Enter File name:\n");
scanf("%s",name);
fp=fopen(name,"r+");
if(fp==NULL)
{
 printf("The File doesnot opened");
}
printf("Enter file content until #");
ch=getchar();
while(ch!='#')
{
 putc(ch,fp);
 ch=getchar();
}
ch1=getc(fp);
fclose(fp);
fp=fopen(name,"r");
ch1=getc(fp);
while(ch1!=EOF)
{
 if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'|| ch1=='u')
  {
    n++;
  }
 printf("%c",ch1);
 ch1=getc(fp);
}
printf("\n The no of vowels is %d\n",n);
fclose(fp);
}                                          
