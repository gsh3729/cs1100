#include<stdio.h>
#include<string.h>
int main()
{
  FILE *p;
  char  *s, file[30], s1[100], s2[100];
  int su,  f=0;
  printf("enter the file to be searched : ");
  scanf(" %s", file);
  printf("enter the word to searched: ");
  scanf(" %s", s2); 
  /*s2[strlen(s2)] = ' ';
  s2[strlen(s2)+1]='\0';
  printf(" %s", s2);*/
  p = fopen(file, "r");
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
      s = strstr(s1,s2);
      if(s!=0)
      {
        f = 1;
        
        break;
      }
    }
   }

   fclose (p);
   if(f==0)
   printf("%s is not found in file\n", s2);
   if (f==1)
   {
     
        printf("%s is found in the file in the file\n ", s2 );
   } 
   return (0);
}
