#include <stdio.h>
void inputarray(int *x, int n);
int getfrequency(int *x,int n, int k);
int getmaxposn(int *x,int n);
int main()
{
 	int a[100],freq[100],n,i,m;

 	printf("enter the num n");
 	scanf("%d",&n);

 	inputarray(a,n);

 	for(i=0;i<n;i++)
 	{
  	 freq[i]=getfrequency(a,n,a[i]);
 	}

 	m=getmaxposn(freq,n);

 	printf("max num of repeated num is %d\n",a[m]);
 	return 0;
}

void inputarray(int *x, int n)
{
 int i;
 printf("enter the values in to array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&x[i]);
 }
}

int getfrequency(int *x,int n, int k)
{
 int i,j=0;
 for(i=0;i<n;i++)
 {
  if(x[i]==k)
  j++;
 }
 return j;
}
 
int getmaxposn(int *x,int n)
{
 int i,l=0,max=0;
 for(i=0;i<n;i++)
 {
  if(x[i]>max)
  {
   max=x[i];
   l=i;
  }
 }
 return l;
}









