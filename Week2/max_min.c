#include <stdio.h>
int main()
{
 int x,y,z,max,min;
 printf("enter a number:");
 scanf("%d%d%d",&x,&y,&z);
 if (x>y)
 max=x;
 else max=y;
 if(z>max)
 max=z;
 printf("max is %d",max);
 if(x<y)
 min=x;
 else min=y;
 if(z<min)
 min=z;
 printf("min is %d",min);
 return 0;
}
