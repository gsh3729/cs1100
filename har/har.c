#include <stdio.h>
int main()
{
 int n,i=1,sq;
 printf("enter the num n");
 scanf("%d",&n);
 while(1)
 {
  if (i<5)
  {
   sq=i*i;
   printf("sq is %d\n",sq);
   i++;
  }
  else
  break;
 }
} 

