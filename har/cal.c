#include<stdio.h>
int main()
{
 int a, b, sum, option;
 printf("\nWelcome! Here is your simiple calculator\n\n");
 do
 {
 printf("Give two numbers to add \n");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum is %d\n",sum);
 printf("Options 1: Do again, 0: Stop\n");
 scanf("%d",&option);
 } while(option==1);
 printf("\nGood Bye! Have a nice day!\n");
 return 0;
}
