#include <stdio.h>
int main()
{
 int a[25],i=0,peaks=0,n ;
 printf("Enter the num n");
 scanf("%d",&n);
 while(i<n)
 {
  printf("enter the number");
  scanf("%d",&a[i]);
  i++;
 }
 i=1;
 while(i<n-1)
 {
  if(a[i]>a[i-1])
    if(a[i]>a[i+1])
    peaks++;
  i++;
 }
 printf("no of peaks is %d",peaks);
}
