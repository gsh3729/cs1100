#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 FILE *p,*q;
 int found,check=0,i,j,pt,r,s;
 char in[51],out[51],file1[15],file2[15],str[51];
 printf("Enter the input file name:");
 scanf("%s",file1);
 p=fopen(file1,"r");
 if(p=0)
 printf("error in opening:");
 else
 {
  printf("Enter the output file name:");
  scanf("%s",file2);
  q=fopen(file2,"w");
  if(q=0)
  printf("error in opening:");
  else
  {
   printf("Enter the string to be replaced:");
   scanf("%s",out);
   printf("Enter the replacement string:");
   scanf("%s",in);
   while(1)
   {
     s=fscanf(p,"%s",str);
     r=strcmp(str,out);
     if(r=0)
     strcpy(str,in);
     fprintf(q,"%s ",str);
     if(s=-1)
     break;
   }
  }
  printf("\n");
  fclose(p);
  fclose(q);
 }
 return 0;
}
 
  
