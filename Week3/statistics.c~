#include <stdio.h>
void main()
{
 int n,i=1,max=0,min=100,b,c,sum=0,fail=0;
 float avg;
 printf("enter the number n:");
 scanf("%d",&n);
 while(i<=n)
 {
  printf ("enter the marks of student %d\n",i);
  scanf("%d",&b);
  sum=sum+b;
  if (b>max)
  max=b;
  if (b<min)
  min=b;
  if (b<40)
  fail++;
  i=i+1;
 }
 avg=(float)sum/n;
 printf("max marks = %d\n",max);
 printf("min marks = %d\n",min);
 printf("avg marks = %.2f\n",avg);
 printf("no of students failed = %d",fail);
}
