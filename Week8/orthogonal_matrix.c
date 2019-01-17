#include<stdio.h>
int main()
{
 int r,c,i,j,k;
 float mat[10][10],tran[10][10],prod[10][10];
 char fl[15];
 FILE *fp;
 printf("Enter the file name which contains the matrix:");
 scanf("%s",fl);
 if(!(fp=fopen(fl,"r")))
 {
  printf("Sorry!!!! There is an error in opening the file\nTerminating program....");
  return 1;
 }
 else
 {
  fscanf(fp,"%d",&r);
  fscanf(fp,"%d",&c);
  if(!(c==r))
   printf("Sorry, the matrices in the file isn\'t a square matrix.\n");
  else
  {
   printf("\n\nThe matrix contained in the file is:\n");
   for(i=0;i<r;i++)
   {
    printf("\n");
    for(j=0;j<c;j++)
    { 
     fscanf(fp,"%f",&mat[i][j]);
     printf("\t%.2f",mat[i][j]);
     tran[j][i]=mat[i][j];
    }
   }
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
     prod[i][j]=0;
     for(k=0;k<c;k++)
      prod[i][j]+=mat[i][k]*tran[k][j];
     if(i==j)
      if(prod[i][j]<1-0.001 || prod[i][j]>1+0.001)
      {
       printf("\nThe matrix isn\'t orthogonal\n");
       return 0;
      }
     if(i!=j)
      if(prod[i][j]<-0.001 || prod[i][j]>0.001)
      {
       printf("\nThe matrix isn\'t orthogonal\n");
       return 0;
      }
    }
   printf("\nThe matrix is orthogonal\n");
  }
 }
 return 0;
}
    
  
 

