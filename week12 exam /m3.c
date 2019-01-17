#include <stdio.h>
int main()
{
 int a[500][500],b[500][500],i,j;
 int w,h,M;
 int success;
 char c[2],file1[20],file2[20];

 FILE *p1,*p2;

 printf("enter the file name");
 scanf("%s",file1);
 
 p1=fopen(file1,"r");
/*opening the file*/
 if(p1==0)
 { 
  printf("error in opening\n");
  return(1);
 }
/*scaning the values of file*/
 success=fscanf(p1,"%s%d%d%d",c,&w,&h,&M);
 

 for(i=0;i<h;i++)
 {
    for(j=0;j<w;j++)
    {
     fscanf(p1, "%d", &a[i][j]);
    }
    printf("\n");
 }

 for(i=0;i<h;i++)
 {
    for(j=0;j<w;j++)
    {
    b[i][j]=M-a[h-i-1][j];
    }
    printf("\n");
 }
 fclose(p1);

 

 printf("enter output file name");
 scanf("%s",file2);
/*opening output file*/
 p2=fopen(file2,"w");
 fprintf(p2,"%s\n%d\t%d\n%d\n",c,w,h,M);
 /*printing values in to new file*/
 for(i=0;i<h;i++)
 {
    for(j=0;j<w;j++)
    {
     fprintf(p2, "%d\t", b[i][j]);
    }
 }
 
 fclose(p2);
}

