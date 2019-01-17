#include <stdio.h>
int main()
{
 int a,i=1,j=0,k=0,max,min,n;
 printf("enter the total nos");
 scanf("%d",&n);
 printf("enter the number");
 scanf("%d",&a);
 max=a;
 min=a;
 while(i<n)
 {
  printf("enter the next number");
  scanf("%d",&a);
  if(a>max)
  {
   max=a;
   j++;
  }
  else if(a<min)
  {
   min=a;
   k++;
  }
  i++;
 }
 if(j==n-1) printf("strictly ascending");
 else if(k==n-1) printf("strictly descending");
 else printf("neither");
 return 0;
 }
