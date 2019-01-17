#include <stdio.h>
int main()
{
 int i,j,n,k,l=0;
 printf("enter the number 0f terms n");
 scanf("%d",&n);
 for(k=1;k<=n;k++)
 {
  for(i=1;i<=n;i++)
  { 
   for(j=1;j<=n;j++)
   {
    if(k==i+j)
    {
     printf("(%d,%d)",i,j);
     l++;
    }
    if(l==n)
    break;
   }
   if(l==n)
   break;
  }
  if(l==n)
  break;
 }
}
