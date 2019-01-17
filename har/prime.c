#include <stdio.h>
int main()
{
 int i, n;
 printf("enter a positive number to check for primality  \n");
 scanf("%d", &n);
 if(n==1)
 printf("%d is not a prime number\n", n);
 else
 {
  i=2;
  while(i < n)
  {
   if (n%i == 0)  //we found a non-trivial divisor of n
   {
    printf("%d is not a prime\n", n);
    break;
   }
   i=i+1;
  }
  if (i==n)
  printf("Yes! %d is a prime!\n",n);
 }
 return(0);
}

