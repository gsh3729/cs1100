#include <stdio.h>
int main()
{
 int a,b,i=1;
 printf("enter the number a:");
 scanf("%d",&a);
 while(i<=16)
 {
  b=a*i;
  printf("%d x %d = %d\n",a,i,b);
  i=i+1;
  }
 return 0;
}
 
