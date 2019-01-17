#include <stdio.h>
int main()
{
 int a,b,c,n;
 printf("enter the  number n");
 scanf("%d",&n);
 c=n;
 printf("%d",c);
 for(a=0;c!=0;c=c/10)
 {
  b=c%10;
  a=a*10+b;
 }
 if(a==n)
 printf("\nit is a palindrome\n");
 else
 printf("it is not a palindrome\n");
 return 0;
}
