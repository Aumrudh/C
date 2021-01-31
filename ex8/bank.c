/*Exercise 8 Program 4
AUMRUDH LAL KUMAR TJ*/
//Program to do Bank Process
#include<stdio.h>
struct Bankaccount
{
   int accountno;
   char name[20];
   float credit;
   float debit;
   float balance;
}ba;
void deposit(struct Bankaccount);
void withdraw(struct Bankaccount);
main()
{
   int choice;
   printf("Enter the account no\n");
   scanf("%d",&ba.accountno);
   printf("Enter the Name of the account of the holder name\n");
   scanf("%s",ba.name);
   printf("Enter the opening balance\n");
   scanf("%f",&ba.balance);
   printf("1-Deposit\n2.Withdraw\n");
   scanf("%d",&choice);
   if(choice==1)
     {
      deposit(ba);
     }
   else if(choice==2)
     {
      withdraw(ba);
     }
   else
     {
      printf("Invalid Option\n");
     }
}

void deposit(struct Bankaccount b)
{
   printf("Enter the deposit amount\n");
   scanf("%f",&b.credit);
   b.balance+=b.credit;
   printf("Account Number %d is credited with %f and Your New Balance is %f\n",b.accountno,b.credit,b.balance);
}
void withdraw(struct Bankaccount c)
{
   printf("Enter the withdrawal amount\n");
   scanf("%f",&c.debit);
   c.balance-=c.debit;
   printf("Account Number %d debited is  %f and Your New Balance is %f\n",c.accountno,c.debit,c.balance);
}


