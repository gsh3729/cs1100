#include<stdio.h>
int main()
{
int a,b, pow,counter;
printf("Give a \n");
scanf("%d",&a);
printf("Give b \n");
scanf("%d",&b);
pow = 1;
counter = 0;
while (counter < b)
{
pow = pow * a;
counter = counter + 1;
}
printf("result = %d \n",pow);
return 0;
}

