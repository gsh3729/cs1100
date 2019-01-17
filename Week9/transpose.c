#include<stdio.h>
int main()
{
	FILE *fp,*fs;
	char filename[20],save[20],p[3];
	int i,j,m,n,max,a[500][500],b[500][500];
	
	printf("Enter the filename:\n");
	scanf("%s", filename);
	
	fp = fopen(filename,"r");
	if(fp == 0)
	{
		printf("Error in opening file %s\n", filename);
		return(1);
	}
	
	printf("Save as:\n");
	scanf("%s", save);
	
	fscanf(fp,"%s", p);
	fscanf(fp,"%d %d", &n,&m);
	fscanf(fp,"%d", &max);
	
	for(i = 0; i<m; i++)
	{	
		for(j = 0; j<n; j++)
			fscanf(fp,"%d", &a[i][j]);
	}
	
	fclose(fp);
	
	for(i = 0;i<n;i++)
	{
		for(j= 0; j<m; j++)
			b[i][j] = a[j][i];
	}
	
	fs = fopen(save,"w");
	
	fprintf(fs,"%s\n", p);
	fprintf(fs,"%d %d\n", m,n);
	fprintf(fs,"%d\n" ,max);
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<m; j++)
			fprintf(fs,"%d ", b[i][j]);
		fprintf(fs,"\n");
	}
	
	fclose(fs);

	return 0;
}
