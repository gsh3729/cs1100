#include <stdio.h>
int main()
{
 int a,n,d,term;
 printf("enter the first term of the ap\n");
 scanf("%d",&a);
 printf("enter the common differnce of the ap\n");
 scanf("%d",&d);
 printf("enter the value of n\n");
 scanf("%d",&n);
 term = a + (n-1)*d;
 printf("n-th term is of the ap is %d \n",term);
 return 0;
}
