#include<stdio.h>
int main()
{
  int a[500][500],m,n,i,j,max,r[500][500];
  char in[100],out[100],magic[100];
  FILE *p,*p1;
  printf("Enter the name of the input negative:");
  scanf("%s",in);
  p=fopen(in,"r");
  if(p==0)
  {
   printf("Erroere in the open file %s\n",in);
   return(1);
  }
  fscanf(p,"%s",magic);
  fscanf(p,"%d",&n);
  fscanf(p,"%d",&m);
  fscanf(p,"%d",&max);
  for(i=0;i<m;i++)
  {
   for(j=0;j<n*3;j++)
   {
     fscanf(p,"%d",&a[i][j]);
   }
  }
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
     r[i][j]=(a[i][3*j]+a[i][3*j+1]+a[i][3*j+2])/3;
    }
   }
   fclose(p);
   printf("Enter the name of the output negative:");
   scanf("%s",out);
   p1=fopen(out,"w");
   fprintf(p1,"P2\n");
   fprintf(p1,"%d %d\n",n,m);
   fprintf(p1,"%d\n",max);
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
     fprintf(p1,"%d ",r[i][j]);
    }
     printf("\n");
   }
fclose(p1);
return 0;
} 
