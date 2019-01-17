#include <stdio.h>
int main()
{
 int a[4][4],i,j,b[4];
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<4;i++)
 {
  b[i]=a[i][0];
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   a[i][j]=a[i][j+1];
  }
 } 
 for(i=0;i<4;i++)
 {
  a[i][3]=b[i];
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   printf("%2d",a[i][j]);
  }
  printf("\n");
 }
}
