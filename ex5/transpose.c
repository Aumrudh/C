/*EXERCISE 5 PROGRAM 7
AUMRUDH LAL KUMAR TJ*/
//Program to print transpose of a matrix
#include<stdio.h>
#define row 3
#define col 3
void matrixtranspose(int[][col]);
main()
{
    int a[row][col];
    int i,j;
    printf("Enter the Matrix\n");
    for(i=0;i<row;i++)
     {
      for(j=0;j<col;j++)
       {
         scanf("%d",&a[i][j]);
       }
     }
    printf("The Entered matrix is \n");
    for(i=0;i<row;i++)
     {
      for(j=0;j<col;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
     }
    matrixtranspose(a);
}

void matrixtranspose(int x[][col])
{
    int i,j;
    printf("The transpose of matrix is \n");
    for(i=0;i<row;i++)
     {
       for(j=0;j<col;j++)
          {
            printf("%d\t",x[j][i]);
          }
       printf("\n");
     }
    printf("\n");
} 
