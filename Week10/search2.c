#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
  FILE *p;
  char  *s, i_f[30], s1[1200], s2[100];
  int su, offset, f=0,i;
  printf("enter the file to be searched : ");
  scanf(" %s", i_f);
  printf("enter the word to searched: ");
  scanf(" %s", s2);
  for(i=0; s2[i]!=0; i++)
  s2[i]=tolower(s2[i]); 
  p = fopen(i_f, "r");
  if(p==0)
  {
  printf("error in opening the file \n");
  return(1);
  }
  else
  {
    while(1)
    {
      
      su = fscanf(p, " %s", s1);
      if(su == -1)
       break;
       for(i=0; s1[i]!=0; i++)
       s1[i]=tolower(s1[i]);
      s = strstr(s1,s2);
      if(s!=0)
      {
        offset = strcmp(s1,s2);
        if(offset==0)
        {
          f = 1;
          break;
        }
      }
    }
   }

   fclose (p);
   if(f==0)
   printf("%s is not found in file\n", s2);
   if (f==1)
   {
     
        printf("%s is found in the file \n ", s2 );
   } 
   return (0);
}



