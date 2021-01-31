#include<stdio.h>
main()
{
  int num,on,rem,result=0;
  printf("Enter a number\n");
  scanf("%d",&num);
  on=num; 
  while(on!=0)
    {
      rem=on%10;
      result=result+(rem*rem*rem);
      on=on/10;
    }
 if(result==num)
  printf("The number is armstrong\n");
 else
  printf("The number is not armstrong\n");
}  

