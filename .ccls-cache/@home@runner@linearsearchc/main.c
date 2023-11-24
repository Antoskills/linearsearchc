//linear search
#include<stdio.h>
int main()
{
  //intial data
  int ar[20],n,i,ele,flag;
  printf("enter the size of array : \n");
  scanf("%d",&n);
  printf("enter the array elements : \n");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  printf("enter the element to be searched : \n");
  scanf("%d",&ele);
  //logic
  for(i=0;i<n;i++)
    {
    if(ele==ar[i])
    {
      flag=1;
      printf("element found at %d \n",ar[i]);
      break;
    }
    }
    printf("element not found!");
  
  return 0;
}