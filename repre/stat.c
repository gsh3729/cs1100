#include <stdio.h>
#include <string.h>
int main()
{
 int success=1,i=0,l;
 int rollno[1200],m1[1200],phymar[1200],chemar[1200];
 char filename[500],name[1200][500] ;
 char text,s1[1200][300],s2[1200][300],s3[1200][300];
 FILE *p;
 

 /*printf("enter the file name\n");
 scanf(" %s",filename);*/
 
 p=fopen("de.txt","r");
 if(p==0)
 {
  printf("error in opening the file");
 }
 
 

  while(success!=-1)
  {
   success = fscanf(p,"%d%c%[^:]%c%s%d%c%s%d%c%s%d%c ",&rollno[i],&text,name[i],&text,s1[i],&m1[i],&text,s2[i],&phymar[i],&text,s3[i],&chemar[i],&text);
   if(success==-1)
   break;
   printf("%d %c %s %c %s %d %c %s % d %c %s % d %c\n",rollno[i],text,name[i],text,s1[i],m1[i],text,s2[i],phymar[i],text,s3[i],chemar[i],text);
   i++;
  }
  fclose(p);
  l=i-1;
  printf("%d",l);
  return 0;
}

























