/*Aumrudh Lal Kumar TJ
Exericise 2 Program 4*/
//Program To write Menu Driven Progrm For clculating SI , CI or to exit 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
   int choice,t=1;
   float p,n,r,ci,si;
   printf("Enter the principle amount\n");
   scanf("%f",&p);
   printf("Enter the no of years\n");
   scanf("%f",&n);
   printf("Enter the Rate of intrest\n");
   scanf("%f",&r);
   printf("\n 1. Simple Intrest \n 2. Compound Intrest \n 3. Exit\n");
   printf("Enter your Choice\n");
   scanf("%d",&choice);
   switch(choice)
    {
      case 1:
              si=(p*n*r)/100;
              printf("The Simple Intrest is %f",si);
              break;
      case 2:
              ci=p*pow((1+r/n),(n*t));
              printf("The Compound Intrest is %f",ci);
              break;
      case 3:
              exit(0);
      default:
              printf("Enter a Valid Choice\n");
    }
}
