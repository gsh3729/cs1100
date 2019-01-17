#include<stdio.h>
int main()
{
  int r[500][500], g[500][500], b[500][500],l[500][500],m,n,max,i,j;
  char c[2],inputfile[30],outputfile[30];
  FILE *p;
  printf("enter inputfilename:");
  scanf("%s",inputfile);
  p=fopen(inputfile,"r");

  if(p==0)
  {
      printf("error occured in opening the file\n");
      return(1);
  }
  
  fscanf(p,"%s",c);
  fscanf(p,"%d %d",&m,&n);
  fscanf(p,"%d",&max);
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
       fscanf(p,"%d %d %d",&r[i][j],&g[i][j],&b[i][j]);
    }
  }
  fclose(p);
  FILE *t;
  printf("enter output filename:");
  scanf("%s",outputfile);
  t=fopen(outputfile,"w");
  fprintf(t,"P3\n");
  fprintf(t,"%d %d \n",m,n);
  fprintf(t,"%d\n",max);
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      l[i][j]=b[i][m-1-j];
    }
  }
/*  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     if(g[i][j]==max && l[i][j]==max && b[i][j]==max)
     {   
       g[i][j]=0;
       l[i][j]=0;
       b[i][j]=0;
     }
     else
        g[i][j]=0;
    }
  }
*/
 for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      fprintf(t,"%d 0 %d ",max-r[i][j],max-l[i][j]);
    }
    fprintf(t,"\n");
  }
  fclose(t);
  return 0;
  }













