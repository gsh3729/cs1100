#include <stdio.h>
int max4(int ,int ,int ,int );
int main()
{
 FILE *p;
 int i=0,success=1,max[200],l;
 char file1[20],text;
 char name[200][30];
 int phymarks[200],chemarks[200],mathsmarks[200],biomarks[200];
  printf("Enter the input file name");
  scanf(" %s",file1);
 	p=fopen(file1,"r");
 	if(p==0)
 	{
  	 printf ("error in opening file");
  	 return 0;
 	}
 	else
 	{
  	 	while(success!=-1)
  		{
		 success=fscanf(p,"%[^,],%d,%d,%d,%d",name[i],& phymarks[i],& chemarks[i],& mathsmarks[i],& biomarks[i]);
   		 /*fscanf(p," %s",name[i]);
   		 fscanf(p," %d",&phymarks[i]);
     	 	 fscanf(p," %c",&text);
   		 fscanf(p," %d",&chemarks[i]);
   		 fscanf(p," %c",&text);
   		 fscanf(p," %d",&mathsmarks[i]);
   		 fscanf(p," %c",&text);
   		 success=fscanf(p,"%d",&biomarks[i]);*/
   		 i++;
 		 l=i-1;
  		} 
  		fclose(p);
  
   		for(i=0;i<l;i++)
   		{
    		    max[i]=max4(phymarks[i],chemarks[i],mathsmarks[i],biomarks[i]);
   		}
   		
		printf("List of the students who have their best in PHYSICS\n");
   		for(i=0;i<l;i++)
   		{
     		    if(max[i]==0)
     		    {
      		       printf("%s\n",name[i]);
     	            }
   		}

	rintf("List of the students who have their best in CHEMISTRY\n");
		for(i=0;i<l;i++)
   		{
     		    if(max[i]=1)
     		    {      		       
      		       printf("%s\n",name[i]);
     	            }
   		}

		printf("List of the students who have their best in MATHS\n");
		for(i=0;i<l;i++)
   		{
     		    if(max[i]=2)
     		    {      		       
      		       printf("%s\n",name[i]);
     	            }
   		}

		printf("List of the students who have their best in BIOLOGY\n");
		for(i=0;i<l;i++)
   		{
     		    if(max[i]=3)
     		    {  
      		     printf("%s\n",name[i]);
     	            }
   		}
       }
}


int max4(int p,int c,int m,int b)
{
  int max;
  max=p;
  if(c>max)
   max=c;
  if(m>max)
   max=m;
  if(b>max)
   max=b;
  
  if(max==p)
    return(0);
  if(max==c)
    return(1);
  if(max==m)
    return(2);
  if(max==b)
    return (3);
}













































