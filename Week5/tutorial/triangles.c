#include <stdio.h>
void main()
{
 int n,i=1,j;
 printf("enter the mum n:");
 scanf("%d",&n);
 while(i<=n)
 {
  j=1;
  while(j<=i)
  {
   if(i==j)
   printf("0\n");
   else
   printf("0 ");
   j++;
  }
  i++;
 }
}
