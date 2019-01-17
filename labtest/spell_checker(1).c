#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  FILE *p1, *p2;
  char   i_f[30], s1[1200], s2[1200];
  int su,i, s, f=0;
  printf("enter the file to be searched : ");
  scanf(" %s", i_f);
  p1 = fopen(i_f, "r");
  if(p1==0)
  {
  printf("error in opening the file \n");
  return(1);
  }
  else
  {
    while(1)
    {
      
      su = fscanf(p1, " %s", s2);
      for(i=0; s2[i]!='\0'; i++)
      s2[i] = tolower(s2[i]);
      if(su == -1)
      break;
      p2 = fopen("spell.words", "r");
      if(p2==0)
      {
       printf("error in opening spell.words");
       return(1);
      }
      else
      {
        f=0;
        while(1)
        { 
          if(feof(p2))
          break;
          fscanf(p2, " %s", s1);
          s = strcmp(s1,s2);
          if(s==0)
          {
            f = 1;
            break;
          }
          else
          {
            f=0;
          }
        }
      }
     fclose(p2);
     if(f==0)
     printf("%s\n", s2);
   }
  }
   fclose (p1);
  
   return (0);
}
