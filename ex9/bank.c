/*Exercise 9 Program 3
AUMRUDH LAL KUMAR*/
//Program for bank
#include<stdio.h>
struct bankaccount
{
   int ano;
   char name[20];
   float credit;
   float debit;
   float balance;
};
main()
{
    int choice;
    struct bankaccount ba,*ptr;
    ptr=&ba;   
    printf("Enter Acccount number\n");
    scanf("%d",&ptr->ano);
    printf("Enter Account holder name\n");
    scanf("%s",ptr->name);
    printf("Enter the opening balance\n");
    scanf("%f",&ptr->balance);
    printf("1.Deposit \n2.Withdraw\n");
    scanf("%d",&choice);
    if(choice==1)
     { 
       printf("Enter the deposit amount\n");
       scanf("%f",&ptr->credit);
       ptr->balance=(ptr->balance)+(ptr->credit);
       printf("New balance is %f\n",ptr->balance);
     }
     else if(choice==2)
     {
       printf("Enter the withdraw amount\n");
       scanf("%f",&ptr->debit);
       ptr->balance=ptr->balance-ptr->debit;
       printf("New balance is %f\n",ptr->balance);
     }
     else
     {
      printf("Enter a valid Choice\n");
     }
}
