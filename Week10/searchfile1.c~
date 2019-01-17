#include <stdio.h>
int main()
{
 int i,j,L1,L2,m=0;
 FILE *p;
 char str[10000],word[20];

 printf("enter the word to be searched:");
 scanf("%s",word);

 for(L2=0;word[L2]!='\0';L2++);
 printf("%d",L2);

 p=fopen("quotes.txt","r");

 for(i=0;i<10000;i++)
 {
  fscanf(p,"%c",&str[i]);
  printf("%c",str[i]);
  if(str[i]=='\0')
  break;
 }

 L1=i;

 for(i=0;i<L1;i++)
 {
  j=0;
  while(j<L2 && str[i+j]==word[j])
  j++;
  if(j==L2)
  {
   m=1;
   break;
  }
 }
 fclose(p);
 if(m==1)
  printf(" the word is there in the file");
 else
 printf(" the word is not there in the file");
 
}
  
 
