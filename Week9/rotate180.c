#include<stdio.h>
int main()
{
	FILE *fp,*fs;
	int a[500][500][3],b[500][500][3],i,j,k,m,n,max;
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
	
	for(i = 0; i<n;  i++)
	{
		for(j = 0; j<m; j++)
		{
			for(k = 0; k<3; k++)
				b[i][j][k] = a[n-1-i][j][k];
		}
	}
	
	fclose(fp);
	
	fs = fopen(save,"w");
	fprintf(fs,"%s\n", p);
	fprintf(fs,"%d %d\n", m,n);
	fprintf(fs,"%d\n", max);
	
	for(i = 0; i<n;  i++)
	{
		for(j = 0; j<m; j++)
		{
			for(k = 0; k<3; k++)
				fprintf(fs,"%d ", b[i][m-j-1][k]);
			fprintf(fs,"\n");
		}
	}
	
	fclose(fs);
	
	printf("Your file is ready!\n");
	
	return 0;
}
