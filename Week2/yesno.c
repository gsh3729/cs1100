#include <stdio.h>
int main()
{
 int a,b,c;
 printf("enter the numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b)
 printf("\nyes");
 else if (b==c)
 printf("\nyes");
 else if (a==c)
 printf("/nyes");
 else 
 printf("\nno");	
 return 0;
}
