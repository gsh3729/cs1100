#include <stdio.h>
int main()
{
 char s1[20],s2[20],s3[20],s4[20];
 int L1,L2,i,j,a,b;
 printf("enter the first string");
 scanf("%19[^\n]s",s1);
 printf("enter the second string");
 scanf(" %19[^\n]s",s2);
 printf("%s\n%s\n",s1,s2);

 for(L1=0;s1[L1]!='\0';L1++);
 for(L2=0;s2[L2]!='\0';L2++);

 for(i=0;i<=L1-L2;i++)
 {	
  j=0;
  while(j<L2 && s1[i+j]==s2[j])
  j++;
  if(j==L2)
  {
   a=i;
   b=1;
   break;
  }
 }
  if (b==1)
  {
   for(i=0;i<L2;i++)
   {
    s4[i]=s2[L2-i-1];
   }
   for(i=a;i<(L2+a);i++)
   {
    
    s1[i]=s4[i-a];
   }
   printf("%s\n",s1);
   }
}
   
