#include <stdio.h>
int main()
{
 char big[100],small[100];
 int i=0,j=0,k,L1,L2,m;
 int shift;

 shift='a'-'A';
 printf("enter the first string:");
 scanf(" %[^\n]s",big);



 printf("enter the second string:");
 scanf(" %[^\n]s",small);
 
 for(L1=0;big[L1]!='\0';L1++);
 for(L2=0;small[L2]!='\0';L2++);

 while(i<100 && big[i]!='\0')
 {
    if( big[i] >= 'A' && big[i] <= 'Z')
    {
     big[i]=big[i]+shift;
    }
    i++;
 }
 i=0;
 while(i<100 && small[i]!='\0')
 {
    if( small[i] >= 'A' && small[i] <= 'Z')
    {
     small[i]=small[i]+shift;
    }
    i++;
 }
 for(i=0;i<=L1-L2;i++)
 {	
  j=0;
  while(j<L2 && big[i+j]==small[j])
  j++;
  if(j==L2)
  {
   m=1;
   break;
  }
 }
  if(m==1)
  printf("THE STRING FIRST IS SUBSTRING OF STRING SECOND \n");
  else
  printf("THE STRING FIRST IS NOT SUBSTRING OF STRING SECOND \n");
  return 0;
 
}

