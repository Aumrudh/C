/*Excersie 8 Program 3
AUMRUDH LAL KUMAR TJ*/
//Program to calculate rank
#include<stdio.h>
#include<string.h>
struct student
{
  int rollno;
  char name[20];
  int marks[6];
  int total;
}stud[100],temp;
main()
{
   int i,j,k,n;
   printf("Enter the no of students \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     {
       printf("Enter the roll no for student %d\n",i+1);
       scanf("%d",&stud[i].rollno);
       printf("Enter the name\n"); 
       scanf("%s",stud[i].name);
       stud[i].total=0;
       printf("Enter the marks\n");
         for(j=0;j<6;j++)
           {
             scanf("%d",&stud[i].marks[j]);
             stud[i].total+=stud[i].marks[j];
           }
     }
   for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
           {
              if(stud[i].total<stud[j].total)
                  {
                     temp.rollno=stud[i].rollno;
									   strcpy(temp.name,stud[i].name);
										 temp.total=stud[i].total;
                     stud[i].rollno=stud[j].rollno;
                     strcpy(stud[i].name,stud[j].name);
                     stud[i].total=stud[j].total;
                     stud[j].rollno=temp.rollno;
                     strcpy(stud[j].name,temp.name);
                     stud[j].total=temp.total;
                     for(k=0;k<6;k++)
                      {
                        temp.marks[k]=stud[i].marks[k];
                        stud[i].marks[k]=stud[j].marks[k];
                        stud[j].marks[k]=temp.marks[k];
                      }
                   }
           }
      }
   printf("\n---------------------------------------------------------------------------------------------------------------\n");
   printf("\nRollNO \t\t Name \t\t Marks\t\t\t\t\t\t      Total\n");
   printf("\n---------------------------------------------------------------------------------------------------------------\n");
   for(i=0;i<n;i++)
      {
       printf("\n%d\t\t%s\t",stud[i].rollno,stud[i].name);
        for(j=0;j<6;j++)
          {
            printf("\t%d  ",stud[i].marks[j]);
          }
      printf("\t\t%d\t",stud[i].total);
      }
     printf("\n");
}
