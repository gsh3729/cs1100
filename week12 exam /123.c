#include <stdio.h>
int main()
{
 int a[500][500],i,j;
 int w,h,M;
 int success;
 char c[2],file1[20],file2[20];

 FILE *p1,*p2;

 printf("enter the file name");
 scanf("%s",file1);
 
 p1=fopen(file1,"r");

 if(p1==0)
 { 
  printf("error in opening\n");
  return(1);
 }

 success=fscanf(p1,"%s%d%d%d",c,&w,&h,&M);
 

 for(i=0;i<h;i++)
 {
    for(j=0;j<w;j++)
    {
     fscanf(p1, "%d", &a[i][j]);
     printf("%d\t",a[i][j]);
    }
    printf("\n");
 }

 fclose(p1);

 

 printf("enter output file name");
 scanf("%s",file2);

 p2=fopen(file2,"w");
 if(p2==0)
{
 printf("errror in opening");
}
 fprintf(p2,"%s\n%d\t%d\n%d\n",c,w*2,h*2,M);
 
   for(i=0;i<h;i++)
   {
    for(j=0;j<w;j++)
    {
     fprintf(p2,"%d ",a[i][j]);
    }
    for(j=0;j<w;j++)
    {
     fprintf(p2,"%d ",M-a[i][w-j-1]);
    }
   } 
    for(i=0;i<h;i++)
   {
    for(j=0;j<w;j++)
    {
     fprintf(p2,"%d ",M-a[h-i-1][j]);
    }
    for(j=0;j<w;j++)
    {
     fprintf(p2,"%d ",a[h-i-1][w-j-1]);
    }
   } 
 
 fclose(p2);
}

