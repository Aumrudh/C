/*Aumrudh Lal Kumar TJ
Exercise 1 Program 4*/
//Program to Calculate Profit Gained
#include<stdio.h>
main()
{
   int apple=40,pomegranate=50;
   int cpap,spap,cppom,sppom;
   int totalcp,totalsp,profit;
   cpap=apple*140;
   cppom=pomegranate*120;
   spap=apple*150;
   sppom=pomegranate*140;
   totalcp=cpap+cppom;
   totalsp=spap+sppom;
   profit=totalsp-totalcp;
   printf("The Profit gained by varun is %d\n",profit);
}
