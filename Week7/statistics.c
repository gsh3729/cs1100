#include <stdio.h>

int main()
{
  int success,count = 0,i,l;
  float sum=0;
  char names[200][30];
  int  marks[200];
  FILE *p;

  p = fopen("data01.txt", "r");
  /* Open the file test.c in read-only mode and assign its handle to p */
  if (p == 0)   /* Check if the file was opened correctly */
  {
   printf("Error in opening the file\n");
   return(1);
  }

  while(count < 200)
  {
    success = fscanf(p,"%s",names[count] );  
    success = fscanf(p,"%d",&marks[count] );  
    if(success == -1)
    {l=count;
      printf("%d",l);
        break;
        }
    count = count+1;
  }
  fclose(p);                          /* Close the file */

  count = count-1;
  while(count >= 0)
  {
    printf("%s\t%d\n", names[count], marks[count]);
    count = count - 1;
  }
 
  for(i=0;i<l;i++)
  {
   sum=sum+marks[i];
  }
  sum=sum/l;
  printf("avg is %.2f\n",sum);
                          

  

  return 0;
}



