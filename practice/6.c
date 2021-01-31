#include<stdio.h>
main()
{
  int x,y;
  y=10;
  x=y++;
  printf("x=%d \t y=%d\n",x,y);
  x=++y;
  printf("x=%d \t y=%d\n",x,y);
  x=(y=y+3,y%4);
  printf("x=%d \t y=%d\n",x,y);

}


