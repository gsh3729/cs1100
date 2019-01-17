#include <stdio.h>
int main()
{
 int i,j,n;
 printf("enter n:");
 scanf("%d",&n);
 do
 {
  j=1;
  if(i%2!=0)
  {
   do 
   {
    if(j%2==0)
    printf("x ");
    else 
    printf("0 "); 
    j++;
   }while(j<=n);
  }
  else
  {
   do
   {
    if(j%2==0)
    printf("0 ");
    else 
    printf("x "); 
    j++;
   } while(j<=n);
  }
  printf("\n");
  i++;
 }while(i<=n);
}
