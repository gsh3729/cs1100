#include <stdio.h>
float CGPA(char,char,char,char);
int main()
{
 FILE *p,*q;
 char file1[20],file2[20];
 int i=0,success=1,l;
 char phygrade[200],chegrade[200],mathsgrade[200],biograde[200];
 char name[200][30];
 float cgpa;
 printf("Enter the input file name");
 scanf(" %s",file1);
 
 	p=fopen(file1,"r");
 	if (p==0)
 	{
 	 printf("error in opening the file");
  	 return 0;
 	}
 	else
 	{
 		while(success!=-1)
  	 	{
			fscanf(p," %s ",name[i]);
			fscanf(p,"%c ",&phygrade[i]);
			fscanf(p,"%c ",&chegrade[i]);
			fscanf(p,"%c ",&mathsgrade[i]);
			success=fscanf(p,"%c ",&biograde[i]);
			i++;
			l=i-1;
		}
                fclose(p);
 		
		printf("enter the output file name");
   		scanf("%s",file2);

   		q=fopen(file2,"w");
   		if (q==0)
   		{
   		 printf("error in opening the file");
    	 	 return 0;
   		}
   		else
   		{
			for(i=0;i<l;i++)
    			{
       				fprintf(q,"%s ",name[i]);
				fprintf(q,"%c ",phygrade[i]);
				fprintf(q,"%c ",chegrade[i]);
				fprintf(q,"%c ",mathsgrade[i]);
				fprintf(q,"%c ",biograde[i]);
				cgpa=CGPA(phygrade[i],chegrade[i],mathsgrade[i],biograde[i]);
				fprintf(q,"%.2f \n",cgpa);
			}
  			fclose(q);
		}
	}
 return 0;
}

float CGPA(char pg,char cg,char mg,char bg)
{
  float p,c,m,b,x;

  if(pg=='A')
  p=10;
  else if(pg=='B')
  p=8;
  else if(pg=='C')
  p=6;
  else if(pg=='F')
  p=0;

  if(cg=='A')
  c=10;
  else if(cg=='B')
  c=8;
  else if(cg=='C')
  c=6;
  else if(cg=='F')
  c=0;

  if(mg=='A')
  m=10;
  else if(mg=='B')
  m=8;
  else if(mg=='C')
  m=6;
  else if(mg=='F')
  m=0;
				
  if(bg=='A')
  b=10;
  else if(bg=='B')
  b=8;
  else if(bg=='C')
  b=6;
  else if(bg=='F')
  b=0;

  x=((p+c+m+b)/4);
  return x;
}






































