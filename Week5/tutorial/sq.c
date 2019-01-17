#include<stdio.h>
int main()
{
 int n, i, t;
 printf("Give n \n");
 scanf("%d",&n);
 t=1;
 for(i=2;i<=n ;i++)
 {
  printf("%d \n",t);
  t=i*i;
 }
}
