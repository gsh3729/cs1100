#include <stdio.h>
int main()
{
 int a,b,q,r,rv;
 printf(" enter the numbers");
 scanf("%d%d",&a,&b);
 q=a/b;
 r=a%b;
 if((2*r)<b)
 rv=q;
 else 
 rv=q+1;
 printf("answer is %d\n",rv);
}
