#include <stdio.h>
int main()
{
 int i,j,m,n,max,a[500][500],b[500][500];
 char c[2],file1[20],file2[20];
 FILE *p,*q;
 printf("enter the input file name");
 scanf("%s",file1);

 p=fopen(file1,"r");
 if(p==0)
 {
  printf("error in opening the file");
  return 0;
 }
 else
 {
  fscanf(p,"%s",c);
  fscanf(p,"%d",&n);
  fscanf(p,"%d",&m);
  fscanf(p,"%d",&max);
  printf(" %s %d %d %d ",c,n,m,max);
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    fscanf(p,"%d",&a[i][j]);
   }
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    b[i][j]=a[j][i];
   }
  }
  fclose(p);
 }

  printf("enter the output file name");
  scanf("%s",file2);
             
  q=fopen(file2,"w");
  fprintf(q,"%s \n",c);     
  fprintf(q,"%d ",m+n);     
  fprintf(q,"%d \n",n+m);
  fprintf(q,"%d \n",max);
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   { 
    
    fprintf(q,"%d ",b[i][m-1-j]);
   }
  }
  fclose(q);
}
