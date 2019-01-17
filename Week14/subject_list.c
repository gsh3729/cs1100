/*
  PROGRAMMER'S NAME : G SRIHARSHA
  DATE:9/11/16
  PROGRAM NAME :statistics.c   
  */
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{/*declaring the variables*/
 int rollno[120],marks[120],phymarks[120],chemarks[120],l,i=0 ;
 float phytotal=0,chetotal=0,mattotal=0,biototal=0,pa,ca,ma,ba,sp=0,sc=0,sm=0,sb=0;
 int success=1,mn=0,bn=0;
 char text,name[120][50],sub1[120][50],phy[50],che[50],ms[4]="Mat",ps[4]="Phy",cs[4]="Che",bs[4]="Bio",sn[40];
 char *a,*b,*w,*x,*y,*z;
 FILE *p;
  
 p=fopen("dataeven.txt","r");/*opening the file*/
 if(p==0)
 {
  printf("error in opening the file");
  return 0;
 }
 

  while(success!=-1)/*scaning the data*/
  {
   success=fscanf(p," %d %c %[^:] %c %s %d %c %s %d %c %s %d %c",&rollno[i],&text,name[i],&text,sub1[i],&marks[i],&text,phy,&phymarks[i],&text,che,&chemarks[i],&text);
   /*printf(" %d %c %s %c %s %d %c %s %d %c %s %d %c\n",rollno[i],text,name[i],text,sub1[i],marks[i],text,phy,phymarks[i],text,che,chemarks[i],text);*/
   i++;
  }
   l=i-1;
  fclose(p);/*closing the file*/
   
 for(i=0;i<l;i++)
 {
  
  phytotal=phytotal+phymarks[i];
  chetotal=chetotal+chemarks[i];
  a=strstr(sub1[i],ms);
  if(a!=0)
  {
   mattotal=mattotal+marks[i];
   mn++;
  }
  else
  {
   biototal=biototal+marks[i];
   bn++;
  }
 }
 pa=((phytotal)/l);
 ca=((chetotal)/l);
 ma=((mattotal)/mn);
 ba=((biototal)/bn);

 printf("enter the subject:");
 scanf("%s",sn);
 
 w=strstr(ps,sn);
 x=strstr(cs,sn);
 y=strstr(ms,sn);
 z=strstr(bs,sn);
 
 if(w!=0)
 {
  printf("name of students who took phyics are\n");
  for(i=0;i<l;i++)
  {
   printf("%d %s\n",rollno[i],name[i]);
  }
  printf("no of students who took phyics are %d\n",l);
 }

 if(x!=0)
 {
  printf("name of students who took chemistry are\n");
  for(i=0;i<l;i++)
  {
   printf("%d %s\n",rollno[i],name[i]);
  }
  printf("no of students who took chemistry are %d\n",l);
 }

 if(y!=0)
 {
   printf("name of students who took maths are\n");
   for(i=0;i<l;i++)
   {
    a=strstr(sub1[i],ms);
    if (a!=0)
    {
     printf("%d %s\n",rollno[i],name[i]);
    }
   } 
   printf("no of students who took maths are %d\n",mn);
 }

 if(z!=0)
 {
  printf("name of students who took bio are\n");
   for(i=0;i<l;i++)
   {
    b=strstr(sub1[i],bs);
    if(b!=0)
    {
     printf("%d %s\n",rollno[i],name[i]);
    }
   }
    printf("no of students who took bio are %d\n",bn);
 }



return 0;

}
 /*for(i=0;i<l;i++)
 {
  sp=sp+(phymarks[i]-pa)*(phymarks[i]-pa);
  sc=sc+(chemarks[i]-ca)*(chemarks[i]-ca);
  a=strstr(sub1[i],m);
  if(a!=0)
  { 
   sm=sm+(marks[i]-ma)*(marks[i]-ma);
  }
  else
  {
   sb=sb+(marks[i]-ba)*(marks[i]-ba);
  }
 }
 
 sp=sqrt(sp/l);
 sc=sqrt(sc/l);
 sm=sqrt(sm/mn);
 sb=sqrt(sb/bn);
  
 printf("PHY\n");
 printf("no of students who took phy is %d\n",l);
 printf("average marks in phy is %.2f\n",pa);
 printf("standard deviation is %.2f\n",sp);

 printf("CHE\n");
 printf("no of students who took che is %d\n",l);
 printf("average marks in phy is %.2f\n",ca);
 printf("standard deviation is %.2f\n",sc);

 printf("MATHS\n");
 printf("no of students who took maths is %d\n",mn);
 printf("average marks in phy is %.2f\n",ma);
 printf("standard deviation is %.2f\n",sm);

 printf("BIO\n");
 printf("no of students who took bio is %d\n",bn);
 printf("average marks in phy is %.2f\n",ba);
 printf("standard deviation is %.2f\n",sb);*/















 

  
 















