/*Exercise 5 Program 2
AUMRUDH LAL KUMAR TJ*/
//Program to calculate Simple intrest
#include<stdio.h>
float si(float,float,float);
main()
{
   float principle,rateofintrest,noofyears;
   printf("Enter the principle amount\n");
   scanf("%f",&principle);
   printf("Enter the Number of years\n");
   scanf("%f",&noofyears);
   printf("Enter the Rate of Intrest\n");
   scanf("%f",&rateofintrest);
   printf("The SI is %f\n",si(principle,noofyears,rateofintrest));
}

float si(float p,float n,float r)
{
 
   return ((p*n*r)/100);
}

