#include <stdio.h>
void main()
{ 
 int i=0,a[45],n;
 printf("enter the num n:");
 scanf("%d",&n);
 while(n!=0)
 {
  a[i]=n%2;
  n=n/2;
  i++;
 }
 i--;
 while(i>=0)
 {
  printf("%d",a[i]);
  i--;
 }
}
