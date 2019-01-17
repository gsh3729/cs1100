#include <stdio.h>
int main()
{
 int a,b;
 printf("enter the number:");
 scanf("%d",&a);
 b=a%10;
 a=a/10;
 if(b>=5)
 {
  a=a+1;
 }
 a=10*a;
 printf("final output is %d",a);
 return 0;
}
