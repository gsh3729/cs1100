#include <stdio.h>
int main()
{
 int n,a[25],i=0,j=0,k=0;
 printf("enter the num n");
 scanf("%d",&n);
 while(i<n)
 {
  printf("enter the number");
  scanf("%d",&a[i]);
  i++;
 }
 i=0;
 while(i<n)
 { 
  if(a[n-1]==a[i])
  j++;
  i++;
 }
 printf("no of times last num is repeated is %d\n",j);
 i=0;
 while (i<n)
 { 
  if(a[n-1]>a[i])
  k++;
  i++;
 }
 printf("no of nos smaller than last number is %d\n",k);
}
