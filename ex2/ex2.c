Script started on Tue 18 Sep 2018 12:22:19 PM IST
bash-3.2$ ct [K[Kat pgm3[K2.c
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
       

bash-3.2$ cc pgm2[Kat pgm2.ceit
cat: pgm2.ceit: No such file or directory
bash-3.2$ exit
exit

Script done on Tue 18 Sep 2018 12:24:01 PM IST
