#include <stdio.h>
int main()
{
 int i,j,n;
 printf("enter n:");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 { 
  if(i%2!=0)
  {
   for(j=1;j<=n;j++)
   {
    if(j%2==0)
    printf("x ");
    else 
    printf("0 "); 
   }
  }
  else
  {
   for(j=1;j<=n;j++)
   {
    if(j%2==0)
    printf("0 ");
    else 
    printf("x "); 
   }
  }
  printf("\n");
 }
}

