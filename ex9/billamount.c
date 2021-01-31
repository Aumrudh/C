/*Exercise 9 Program 1
AUMRUDH LAL KUMAR TJ*/
//Program to calculate bill
#include<stdio.h>
#include<malloc.h>
struct Items
{
   int itemno;
   char name[20];
   int quantity;
   float price;
   float amount;
}*it;
main()
{
    int n,i;
    float billamount=0.0;
    typedef struct Items item;
    printf("Enter the Number of items purchased\n");
    scanf("%d",&n);
    it=(item*)malloc(n*sizeof(item));
    for(i=0;i<n;i++)
      {
        printf("Enter the item no\n");
        scanf("%d",&it[i].itemno);
        printf("Enter the name of the item\n");
        scanf("%s",&it[i].name);
        printf("Enter the quantity\n");
        scanf("%d",&it[i].quantity);
        printf("Enter the price\n");
        scanf("%f",&it[i].price);
      }
    for(i=0;i<n;i++)
      {
        it[i].amount=it[i].price*it[i].quantity;
        billamount+=it[i].amount;
      }
    printf("\n-------------------------------------------------------------------------\n");
    printf("\nItem No.\tName\t Quantity\t Price\t Amount\n");
    printf("\n-------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
      {
        printf("%d\t%s\t%d\t%.2f\t%.2f\n",it[i].itemno,it[i].name,it[i].quantity,it[i].price,it[i].amount);
      }
    printf("The Total bill amount =%.2f\n",billamount);
}

    
