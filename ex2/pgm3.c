/*Aumrudh Lal Kumr
Exercise 2 Program 3*/
//Progrm to find the root of Quadratic Equation
#include<stdio.h>
#include<math.h>
main()
{
   float a,b,c,d,root1,root2;
   printf("Enter a b c of the quadratic equation\n");
   scanf("%f%f%f",&a,&b,&c);
   d=(b*b)-(4*a*c);
   if(d<0)
     {
       printf("Roots Are complex Numbers\n");
       printf("The Roots Are\n");
       printf("%.3f+%.3fi\n",-b/(2*a),sqrt(-d)/(2*d));
       printf("%.3f+%.3fi",-b/(2*a),-sqrt(-d)/(2*d));
     }
   else if(d==0)
     {
       printf("Both roots are equal \n");
       root1=-b/(2*a);
       printf("Roots of quadratic equation is %.3f",root1);
     }
   else
     {
       printf("Roots are real number\n");
       root1=(-b+sqrt(d))/(2*a);
       root2=(-b-sqrt(d))/(2*a);
       printf("Root of QF is %.3f and %.3f",root1,root2);
     }
}
