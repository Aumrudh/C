/*Exercise9 Program 2
AUMRUDH LAL KUMAR*/
//Program to print ticketlist
#include<stdio.h>
#include<malloc.h>
typedef struct tickets
{
   int tno;
   char name[20];
   char boarding[15];
   char destination[10];
}ticket;
main()
{
   int i,n,no,flag=0;
   ticket *tc;
   printf("Enter the no of tickets\n");
   scanf("%d",&n);
   tc=(ticket*)malloc(sizeof(ticket)*n);
   for(i=0;i<n;i++)
     {
       printf("Enter the Ticket no\n");
       scanf("%d",&tc[i].tno);
       printf("Enter the name\n");
       scanf("%s",tc[i].name);
       printf("Enter the Boarding Point\n");
       scanf("%s",tc[i].boarding);
       printf("Enter the destination\n");
       scanf("%s",tc[i].destination);
     }
    printf("\n-------------------------------------------------------------------------\n");
    printf("\nTicketNo.\tName\t Boardingpoint\t Destination\n");
    printf("\n-------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
       {
         printf("%d\t\t%s\t%s\t\t%s\n",tc[i].tno,tc[i].name,tc[i].boarding,tc[i].destination);
       }
    printf("Enter the ticket no to be searched \n");
    scanf("%d",&no);
    for(i=0;i<n;i++)
       {
        if(no==tc[i].tno)
        flag=1;
        break;
       }
    if(flag==1)
      {
        printf("Ticket is confirmed\n");
      }
    else
     {
      printf("Ticket is not confirmed\n");
     }
}
 
