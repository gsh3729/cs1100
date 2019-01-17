#include<stdio.h>
int main()
{
 int a[20], n, i, j, temp, maxposn;
 printf("enter n (<=20) \n");
 scanf("%d",&n);
 if(n>20)
 {
  printf("wrong input \n");
 }
 else
 {
/*input array elements*/
  i=0;
  while (i < n)
  {
  printf("enter the next element \n");
  scanf("%d",&a[i]);
  i = i +1;
  }
  i=0;
/* after one iteration of the loop, maximum among
a[0] to a[n-(i+1)] is exchanged with a[n-(i+1)]*/
  while(i<=n-2)
  {
   maxposn=0;
   j=1;
/*when the loop is completed, maxposn will be the index of the
maximum element among a[0] to a[n-(i+1)]*/
    while(j<=n-(i+1))
    {
     if(a[j] > a[maxposn])
     {
      maxposn=j;
     }
     j=j+1;
    }
/*exchange a[maxposn] and a[n-(i+1)] */
   temp=a[n-(i+1)];
   a[n-(i+1)]=a[maxposn];
   a[maxposn]=temp;
   i=i+1;
  }
  i=0;
  printf("sorted list \n");
  while(i<n)
 {
  printf("%d ",a[i]);
  i=i+1;
 }
printf("\n");
}
}
