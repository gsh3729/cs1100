#include <stdio.h>
int main()
{
 int counter=1, num=2, n, i;
 printf("enter the number of primes required\n");
 scanf("%d", &n);
 printf("\nfirst %d primes are given below\n",n);
 while(counter <= n)
 {
  i=2;
  while(i <= num/2)
  {
   if (num%i == 0) //we found a non-trivial divisor of n
   {
    ________________
   }
   i=i+1;
  }
  if (i > ___________)
  {
   printf("%d \n", num);
   counter++;
  }
  num = ___;
 }
}
