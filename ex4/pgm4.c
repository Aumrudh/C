/*Exercise 5 Program 4
AUMRUDH LALi KUMAR TJ*/
//Program to Do Matrix Multiplication 
#include<stdio.h>
main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("Enter The elements of Matrix A\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The elements of Matrix B\n");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
        {
         scanf("%d",&b[i][j]);
        }
     }
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
         {
           c[i][j]=0;
           for(k=0;k<3;k++)
            { 
            c[i][j]+=a[i][k]*b[k][j];
            }
          }
     }
    printf("Matrix A is\n");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
     }
     printf("Matrix B is\n");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
                                                                                 
       {
          printf("%d\t",b[i][j]);
        }
      printf("\n");
     }
    printf("Matrix C is\n");
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
        {
          printf("%d\t",c[i][j]);
        }
      printf("\n");
     }


}
