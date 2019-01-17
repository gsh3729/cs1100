#include <stdio.h>
int main()
{
 int n,i=0,j=0;
 float a[25],b[25];
 printf("enter the num n\n");
 scanf("%d",&n);
 while(i<n)
 {
     printf("enter the number\n");
     scanf("%f",&a[i]);
     i++;
 }
 i=0;
 while(i<n)
 {
     b[i]=a[n-i-1];
     printf("the number is %f\n",b[i]);
     i++;
 }
 i=0;
 while(i<n)
 { 
     if (a[i]==b[i])
          j++;
     i++;
 }
 if(j==n)
     printf("the number is palindrome\n");
 else
     printf("the number is not palindrome\n");
}
