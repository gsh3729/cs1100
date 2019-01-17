#include<stdio.h>
int main()
{
int  n,a[100],counter,mode,i,frequency[100]={1};
printf("enter value for n");
scanf("%d",&n);

counter=0;
while(counter<n)
{ 
  printf("enter value");
  scanf("%d",&a[counter]);
  counter++;
} 
 mode=a[0];
frequency[0]=1;
counter=0;
while(counter<n)
{
  i=counter+1;
  while(i<n)
  {
    if(a[i]==a[counter])
    frequency[counter]++;
    i++;
  }
  counter++;
}

counter=1;
while(counter<n)
{
  if(frequency[counter]>frequency[counter-1])
  mode=a[counter];
  counter++;
}
printf("majority number is:%d",mode);
return 0;
}   
