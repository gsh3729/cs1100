#include<stdio.h>
int main()
{
 int i, j, a[100][100], n, t, k=0,s[100];
 printf("Give dimension (<=100) \n");
 scanf("%d", &n);
 if(n<=100)
 {  
  printf("enter elements of a %d X %d matrix\n", n, n);
  for(i=0; i<n; i++)
  {
   for(j=0; j<n; j++)
   {
    scanf("%d", &a[i][j]);
   }
  }
j=0;
t=a[0][0];
for(i=0; i<n; i++)
{
if(a[i][0]>t)
{
t=a[i][0];
k=i;
}
}
printf("index is %d\n",k);
for(j=0;j<n;j++)
{
t[j]=a[0][j];
a[0][j]=a[k][j];
a[k][j]=t[j];
