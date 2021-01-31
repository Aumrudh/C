#include<stdio.h>
#include<math.h>
main()
{
  int a,b,c,d,e;
  printf("Enter 2 Numbers\n");
  scanf("%d%d",&a,&b);
  //c=a~b;
  d=a<<b;
  e=a>>b;
  printf("THe value after negtion is %d\n",c);
  printf("The value after left shift is %d\n",d);
  printf("The value after right shift is %d\n",e);
}
