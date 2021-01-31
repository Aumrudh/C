/*Excersie 8 Program 2
AUMRUDH LAL KUMAR TJ*/
//Program To Print emplyee details
#include<stdio.h>
struct employee
{
  int eid;
  char name[20];
  char dep[20];
  float bpay;
  float da;
  float hra;
  float gpay;
  float npay;
  float pf;
}em[50];
main()
{
   int n,i;
   printf("Enter the number of employee\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     {
      printf("Enter the employee id\n");
      scanf("%d",&em[i].eid);
      printf("Enter the employee name\n");
      scanf("%s",em[i].name);
      printf("Enter the employee department\n");
      scanf("%s",em[i].dep);
      printf("Enter the Basic Pay\n");
      scanf("%f",&em[i].bpay);
      em[i].da=em[i].bpay*0.5;
      em[i].hra=em[i].bpay*0.05;
      em[i].gpay=em[i].bpay+em[i].da+em[i].hra;
      em[i].pf=em[i].bpay*0.10;
      em[i].npay=em[i].gpay-em[i].pf;
     }
    printf("The Employee Details are\n");
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\nEmployee ID \t Name \t Department \t Basicpay \t DA \t\t HRA \t\tPF \t\t Gross Pay \t\tNetpay\n");
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
     {
       printf("%d\t\t%s\t\t%s\t%f\t%f\t%f\t%f\t%f\t\t%f",em[i].eid,em[i].name,em[i].dep,em[i].bpay,em[i].da,em[i].hra,em[i].pf,em[i].gpay,em[i].npay);
       printf("\n");
     }
}
