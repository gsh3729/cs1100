#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 FILE *ptr;
 int found=0,len,i;
 long size,pos=0;
 char in[51],str[51],fl[15];
 printf("Enter the input file name:");
 scanf("%s",fl);
 if(!(ptr=fopen(fl,"r")))
 {
  printf("Sorry!!!! the input file can\'t be opened\n");
  return 1;
 }
 else
 {
  printf("Enter the string to search for(max. 50 characters):");
  scanf(" %[^\n]s",str);
  getchar();
  str[50]='\0';
  len=strlen(str);
  fseek(ptr,0,SEEK_END);
  size=ftell(ptr);
  while((pos!=size-len+2)&&(!found))
  {
   fseek(ptr,pos,SEEK_SET);
   for(i=0;i<len;i++)
    fscanf(ptr,"%c",in+i);
   in[len]='\0';
   if(!strcmp(in,str))
    found++;
   pos++;
  }     
 }
 if(found)
  printf("The string has been found in the file");
 else
  printf("Sorry!!!! the string hasn\'t been found");
 printf("\n");
 fclose(ptr);
 return 0;
}
 


