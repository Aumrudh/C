/*Aumrudh Lal Kumar TJ
Exercise 2 Program 2 -  Award Grade according to grades*/
#include<stdio.h>
main()
{
    int m1,m2,m3,m4,total,avg;
    printf("Enter the marks of the four subjects\n");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;
    avg=total/4;
    if(avg>79&&avg<100)
      {
        printf("Good\n");
      }
    else if(avg>59&&avg<80)
      {
        printf("Average\n");
      }
    else if(avg>39&&avg<60)
      {
        printf("Fail");
      }
    else
      {
        printf("Fail\n");
      }
}
       

