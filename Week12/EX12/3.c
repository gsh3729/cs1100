#include <stdio.h>
void inputarray(int (*x)[], int );
void printarray(int (*x)[], int );
void addmatrices(int (*x)[],int (*y)[], int (*z)[],int);
int main()
{
 int x[10][10],y[10][10],z[10][10];
 int a,b,c,d;
 printf("enter the size of matrix 1");
 scanf("%d %d",&a,&b);
 printf("enter the size of matrix 1");
 scanf("%d %d",&c,&d);
 if (a==b && c==d && b==c)
 {
  printf("enter the elements of 1st matrix in to array\n");
  inputarray(x,a);
  printf("enter the elements of 2nd matrix in to array\n");
  inputarray(y,a);
  addmatrices(x,y,z,a);
  printarray(z,a);
 }
  printf("%d",x[0][1]);
 return 0;
}
   
void printarray(int x[][10], int n)
{
 int i,j;
 for(i=0; i<n; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("%d ",x[i][j]);
  }
  printf("\n");
 }
}

void inputarray(int x[][10], int n)
{
 int i,j;
 printf("enter the values in to array\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf(" %d",&x[i][j]);
  }
 }
}

void addmatrices(int (*x)[10],int (*y)[10],int (*z)[10], int n)
{
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   z[i][j]=x[i][j]+y[i][j];
  }
 }
}















