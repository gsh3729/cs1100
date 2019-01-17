#include <stdio.h>
int main()
{
 int n,i,j,k,r ;
 printf("enter n");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
  for(j=2;j<i;j++)//checking whether it is a prime number or not
  {
   if( i%j!=0)
   k++;
  }
  r=n%i;
  if(k==i-2)
  {
   if(r==0)//checking that  primenumber is a factor or not
   printf("%d ",i);
  }
  k=0;
 }
 return 0;
}
