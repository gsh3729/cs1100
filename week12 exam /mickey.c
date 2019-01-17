#include <stdio.h>
int main()
{
 int i,j,a[223][226],b[223][226],c[223][226],d[223][226],e[223][226];
 int m1,n1,m2,n2,max;
 FILE *p,*q;
 char file1[30],file2[30],str[3];
 printf("enter the input image file");
 scanf("%s",file1);
 m2=(2*m1);
 n2=(2*n1);

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
 
  for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     b[i][j]=max-a[i][n1-j-1];
    }
   }
   
   for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     c[i][j]=a[i][j-n1-1];
    }
   }
 
  for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     e[i][j]=c[m1-i-1][j];
    }
   }
   for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     d[i][j]=max-a[m1-i-1][j];
    }
   }
 printf("enter the output image file");
 scanf("%s",file2);

  q=fopen(file2,"w");
  if(q==0)
  {
  printf("error in outputing the file");
  return 0;
  }
  
  fprintf(q,"%s \n",str);
  fprintf(q,"%d ",n2);
  fprintf(q,"%d\n",m2);
  fprintf(q,"%d\n",max);
  
  for(i=0;i<m1;i++)
   {
    for(j=0;j<n1;j++)
    {
     fprintf(q,"%d",a[i][j]);
    }
   }   
  
  
  for(i=0;i<m1;i++)
   {
    for(j=n1;j<(n1*2);j++)
    {
     fprintf(q,"%d",b[i][j]);
    }
   }
  
  for(i=m1;i<(m1*2);i++)
   {
    for(j=n1;j<(n1*2);j++)
    {
     fprintf(q,"%d",e[i][j]);
    }
   }

  for(i=m1;i<(m1*2);i++)
   {
    for(j=0;j<n1;j++)
    {
     fprintf(q,"%d",d[i][j]);
    }
   }
  fclose(q);
 return 0;
}
}
  
