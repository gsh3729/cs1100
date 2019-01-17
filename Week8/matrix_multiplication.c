#include<stdio.h>
int main()        
{
 int r[2],c[2],i,j,k;
 float mat[2][10][10],prod[10][10];
 char fl[2][15];
 FILE *fp[2];
 printf("Enter the file names which contains the matrices:");
 for(i=0;i<2;i++)
 {
  printf("\n\t File %d:",i+1);
  scanf("%s",fl[i]);
  if(!(fp[i]=fopen(fl[i],"r")))
  {
   printf("Sorry!!!! There is an error in opening the file\nTerminating program....");
   return 1;
  }
  else
  {
   fscanf(fp[i],"%d",r+i);
   fscanf(fp[i],"%d",c+i);
  }
 }
  for(i=0;i<2;i++)
  {
   printf("\n\nThe matrix contained in %dth file is:\n",i+1);
   {
    for(j=0;j<r[i];j++)
    {
     printf("\n");
     for(k=0;k<c[i];k++)
     { 
      fscanf(fp[i],"%f",&mat[i][j][k]);
      printf("\t%.2f",mat[i][j][k]);
     }
    }
   }
  }
  if(!(c[0]==r[1]))
   printf("Sorry, matrices can\'t be multiplied");
  else
  {
   printf("\n\nThe product of the matrices is:");
   for(i=0;i<r[0];i++)
   {
    printf("\n");
    for(j=0;j<c[1];j++)
    {
     prod[i][j]=0;
     for(k=0;k<c[0];k++)
      prod[i][j]+=mat[0][i][k]*mat[1][k][j];
     printf("\t%.2f",prod[i][j]);
    }
   }
  }
  printf("\n");
  return 0;
}
    
