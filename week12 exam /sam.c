#include <stdio.h>
int main()
{
 int i,j,a[500][500],b[500][500],c[500][500],d[500][500];
 int m1,n1,m2,n2,max;
 FILE *p,*q;
 char file1[30],file2[30],str[2];
 printf("enter the input image file");
 scanf("%s",file1);
 m2=2*m1;
 n2=2*n1;

 p=fopen(file1,"r");
 if(p==0)
 {
  printf("error in opening the file");
  return 0;
 }
 else
 {
  fscanf(p,"%s",str);
  fscanf(p,"%d",&n1);
  fscanf(p,"%d",&m1);
  fscanf(p,"%d",&max);
 
   for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     fscanf(p,"%d",&a[i][j]);
    }
   }

  fclose(p);
 /*for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     b[i][j]=max-a[i][n1-j-1];
    }
   }*/

 printf("enter the output image file");
 scanf("%s",file2);

  q=fopen(file2,"w");
  if(q==0)
  {
  printf("error in outputing the file");
  return 0;
  }
  
  fprintf(q,"%s\n%d\t%d\n%d\n",str,n1,m1,max);
  for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     fprintf(q,"%d",a[i][j]);
    }
    for(j=0;j<n1;j++)
    {
     fprintf(q,"%d",max-a[i][n1-j-1]);
    }
   } 
    for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     fprintf(q,"%d",max-a[m1-i-1][j]);
    }
    for(j=0;j<n1;j++)
    {
     fprintf(q,"%d",a[m1-i-1][n1-j-1]);
    }
   } 
  fclose(q);
}   
}
