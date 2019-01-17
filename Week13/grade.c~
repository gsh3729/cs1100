#include <stdio.h>
float average(int *,int);
char grade(int ,float);
int main()
{
 FILE *p,*q;
 int i=0,l,success=1;
 int phymarks[200],chemarks[200],mathsmarks[200],biomarks[200];
 char phygrade,chegrade,mathsgrade,biograde;
 float phyavg,cheavg,mathsavg,bioavg;
 float avg;
 char file1[20],file2[20];
 char text;
 char name[200][30];
 
 
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
   	 		fscanf(p," %s",name[i]);
   	 		fscanf(p," %d",&phymarks[i]);
   	 		fscanf(p," %c",&text);
   	 		fscanf(p," %d",&chemarks[i]);
   	 		fscanf(p," %c",&text);
   	 		fscanf(p," %d",&mathsmarks[i]);
   	 		fscanf(p," %c",&text);
   	 		success=fscanf(p," %d",&biomarks[i]);
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
   		 	phyavg= average(phymarks,l);
   		 	cheavg= average(chemarks,l);
    		 	mathsavg= average(mathsmarks,l);
    	         	bioavg= average(biomarks,l);
    			for(i=0;i<l;i++)
    			{
       				fprintf(q,"%s ",name[i]);
       				phygrade=grade(phymarks[i],phyavg);
       				fprintf(q,"%c ",phygrade);
       				chegrade=grade(chemarks[i],cheavg);
       				fprintf(q,"%c ",chegrade);
       				mathsgrade=grade(mathsmarks[i],mathsavg);
       				fprintf(q,"%c ",mathsgrade);
      				biograde=grade(biomarks[i],bioavg);
       				fprintf(q,"%c \n",biograde);
    			}
 			fclose(q);
  		}
    }
return 0;
}


float average(int *p,int l)
{
 int i;
 float sum=0,avg;
 for(i=0;i<l;i++)
 {
  sum=sum+*(p+i);
 }
 avg=sum/l;
 return avg;
}

char grade(int pm,float pa)
{

 if(pm<(pa/2))
 return 'F';
 else if(pm>(pa/2) && pm<pa)
 return 'C';
 else if(pm>pa && pm<(2*pa))
 return 'B';
 else if(pm>(2*pa))
 return 'A';
}


 
 














    
 



    
   
    
