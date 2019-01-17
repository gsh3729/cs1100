#include <stdio.h>
int main()
{
 int a[20],b[20],i=2;
 a[0]=1;
 a[1]=1;
 while(i<20)
 {
  a[i]=a[i-1]+a[i-2];
  i++;
 }
 i=0;
 while(i<20)
 {
  printf("elements of series is %2d\n",a[i]);
  i++;
 }
 i=0;
 while(i<20)
 {
  b[i]=a[19-i];
  printf("reverse is %2d\n",b[i]);
  i++;
 }
}
