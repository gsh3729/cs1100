#include <stdio.h>
int main()
{
 char s1[20],s2[20];
 int i=0;
 int shift1,shift2,shift3;
 printf("enter the first string");
 scanf("%19[^\n]s",s1);
 
 shift1='a'-'A';
 shift2='d'-'a';
 shift3='a'-'x';
 i=0;
 while(i<20 && s1[i]!='\0')
 {
    if( s1[i] >= 'A' && s1[i] <= 'Z')
     s1[i]=s1[i]+shift1;
     i++;
 }
 i=0;
 while(i<20 && s1[i]!='\0')
 {
    if( s1[i] >= 'A' && s1[i] <= 'Z')
     s1[i]=s1[i]+shift1;
     else if ( s1[i] >= 'a' && s1[i] <= 'w')
     s2[i]=s1[i]+shift2;
    else if ( s1[i] >= 'x' && s1[i] <= 'z')
     s2[i]=s1[i]+shift3;
     else 
      s2[i]=s1[i];
     i++;
 }
 
 printf("%s",s2);
  
}
