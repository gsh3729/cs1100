#include <stdio.h>
int countpermut(int,int);
int main()
{
 int n,k,nPk;
 printf("enter the positive number n");
 scanf("%d",&n);
 printf("enter the non negative number k");
 scanf("%d",&k);
 nPk=countpermut(n,k);
 printf("the value of nPk is %d\n",nPk);
}
int countpermut(int n,int k)
{
 int i,j;
 if(k==0)
 i=0;
 else
 {
  i=1;
  for(j=0;j<=(k-1);j++)
  {
   i=i*(n-j);
  }
 }
 return i;
}
   
