/*Exercise 7 Program 1
AUMRUDH LAL KUMAR TJ*/
//Program to find largest  of three nos using pointers
#include<stdio.h>
int *larger(int*,int*,int*);
main()
{
    int a,b,c,*p,big;
    p=&big;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    *p=larger(&a,&b,&c);
    printf("The largest of three nos is %d\n",*p);
}

int *larger(int*x,int*y,int*z)
{
   if((*x>*x)&&(*x>*z))
     return *x;
   else if((*y>*x)&&(*y>*z))
     return *y;
   else 
     return *z;
}
