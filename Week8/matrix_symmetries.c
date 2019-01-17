#include<stdio.h>
int main()
{
 int r,c,i,j,k,check[3]={1,1,1};
 float mat[10][10],tran[10][10];
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
   check[0]=0;
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
    if(mat[i][j]!=tran[i][j])
     check[1]=0;
    if(mat[i][j]+tran[i][j]!=0)
     check[2]=0;
   }
  if(check[0]==0)
   printf("\nThe matrix isn\'t a square matrix\n");
  else
  { 
   if(check[1]==1)
    printf("\nThe matrix is a symmetric square matrix\n");
   else if(check[2]==1)
    printf("\nThe matrix is a skew-symmetric square matrix\n");
   else
    printf("\nThe matrix is a square matrix but neither symmetric nor skew-symmetric\n");
  }
 }  
 return 0;
}
