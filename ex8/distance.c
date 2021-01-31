/*Exercise 8 Program1
AUMRUDH LAL KUMAR TJ*/
//Program to calcaluate distance b\w 2points
#include<stdio.h>
#include<math.h>
struct point
{
   float x;
   float y;
}p1,p2;
main()
{
   float distance;
   printf("Enter the first point\n");
   scanf("%f%f",&p1.x,&p1.y);
   printf("Enter the second point\n");
   scanf("%f%f",&p2.x,&p2.y);
   distance=sqrt((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x));
   printf("The distance between two points is %f\n",distance);
}
