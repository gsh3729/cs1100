#include <stdio.h>
int main()
{
 FILE *p,*q;
 char file1[20],file2[20],M[3];
 int m,n,max,a[500][500],b[500][500],i,j;

 printf("enter file name:");
 scanf("%s",file1);

 p = fopen(file1,"r");
 if(p == 0)
 {
   printf("Error in opening file");
  
 }

 fscanf(p,"%s", M);
 fscanf(p,"%d %d %d", &n,&m,&max);
 
 
 for(i = 0; i<m; i++)
 {	
  for(j = 0; j<n; j++)
  fscanf(p,"%d", &a[i][j]);
 }
	
 fclose(p);

 printf("enter output file name:");
 scanf("%s",file2);

 for(i = 0;i<n;i++)
 {
  for(j= 0; j<m; j++)
  b[i][j] = a[j][i];
 }

 q=fopen(file2,"w");
 fprintf(q,"%s\n", M);
 fprintf(q,"%d %d\n %d\n", m,n,max);	
 for(i = 0; i<n; i++)
	{
		for(j = 0; j<m; j++)
			fprintf(q,"%d ", b[i][j]);
		fprintf(q,"\n");
	}
	
	fclose(q);

	return 0;

 
}
