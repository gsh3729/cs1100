#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 FILE *in,*out;
 int found,check=0,i,j,pt;
 char wrng[51],cor[51],fl_1[15],fl_2[15],str[51];
 printf("Enter the input file name:");
 scanf("%s",fl_1);
 if(!(in=fopen(fl_1,"r")))
 {
  printf("Sorry the input file can\'t be opened\n");
  return 1;
 }
 else
 {
  printf("Enter the output file name:");
  scanf("%s",fl_2);
  if(!(out=fopen(fl_2,"w")))
  {
   printf("Sorry the output file can\'t be created\n");
   fclose(in);
   return 1;
  }
  else
  {
   printf("Enter the string to be replaced:");
   scanf("%s",wrng);
   printf("Enter the replacement string:");
   scanf("%s",cor);
   while(fscanf(in,"%s",str)!=-1)
   {
     if(!strcmp(str,wrng))
      strcpy(str,cor);
     fprintf(out,"%s ",str);
   }
  }
  printf("\n");
  fclose(in);
  fclose(out);
 }
 return 0;
}
 



