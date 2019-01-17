#include<stdio.h>
int main()
{
	FILE *fp,*fs;
	int a[158][203][3],b[203][158][3],d[203][203][3],i,j,k,m,n,max;
	char filename[20],save[20],p[3];
	
	printf("Enter filename:\n");
	scanf("%s", filename);
	
	printf("Save as:\n");
	scanf("%s", save);
	
	fp = fopen(filename,"r");
	fscanf(fp,"%s", p);
	fscanf(fp,"%d %d", &m,&n);
	fscanf(fp,"%d",&max);
	
	for(i = 0; i<n;  i++)
	{
		for(j = 0; j<m; j++)
		{
			for(k = 0; k<3; k++)
				fscanf(fp,"%d", &a[i][j][k]);
		}
	}
	
	fclose(fp);
	
	for(i = 0; i<m;  i++)
	{
		for(j = 0; j<n; j++)
		{
			for(k = 0; k<3; k++)
				b[i][j][k] = a[j][i][k];
		}
	}
	
	for(i = 0; i<m;  i++)
	{
		for(j = 0; j<n; j++)
		{
			for(k = 0; k<3; k++)
				d[i][j][k] = b[m-1-i][j][k];
		}
	}
	
	fs = fopen(save,"w");
	fprintf(fs,"%s\n", p);
	fprintf(fs,"%d %d\n", n,m);
	fprintf(fs,"%d\n", max);
	
	for(i = 0; i<m;  i++)
	{
		for(j = 0; j<n; j++)
		{
			for(k = 0; k<3; k++)
				fprintf(fs,"%d ", d[i][j][k]);
			fprintf(fs,"\n");
		}
	}
	
	fclose(fs);
	
	printf("Your file is ready!\n");
	
	return 0;
}
