/*Exercise 5 Program 6
AUMRUDH LAL KUMAR TJ*/
//Program to do binary search using recursion functions
#include<stdio.h>
int binarysearch(int[],int,int,int);
main()
{
    int a[20],n,key,low,high,mid,i,position;
    printf("Enter The no. of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements only in sorted order\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    position=binarysearch(a,key,low,high);
    if(position!=-1)
     {
       printf("The element %d is present at %d position\n",key,position);
     }
    else
     {
       printf("The element is not found in the array\n");
     }
}

int binarysearch(int x[],int value,int l,int h)
{
   int mid;
   mid=(l+h)/2;
   if(l>h)
    {
      return -1;
    }
   else if(x[mid]==value)
    {
         return mid+1;
    }
   else if(x[mid]>value)
   {
     h=mid-1;
     return binarysearch(x,value,l,h);
   }
   else
   {
     l=mid+1;
     return binarysearch(x,value,l,h);
   }
}
