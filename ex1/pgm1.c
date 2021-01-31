/*Aumrudh Lal Kumr TJ
Exercise1 Program1*/
//Program To calculate Gross Salary and Net Salary
#include<stdio.h>
main()
{
  float basicpay,DA,HRA,allowance;
  float grosssalary,netsalary,deduction;
  printf("Enter the basic pay\n");
  scanf("%f",&basicpay);
  DA=(50*basicpay)/100;
  HRA=(10*basicpay)/100;
  allowance=1000;
  grosssalary=basicpay+DA+HRA+allowance;
	deduction=(15*basicpay)/100;
  netsalary=grosssalary-deduction;
  printf("The Gross Salary of the employee %f\n",grosssalary);
  printf("The Net Salary of the employee %f\n",netsalary);
}
