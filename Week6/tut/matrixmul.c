#include<stdio.h>
int main()
{
 int a[3][4] ={{1, 2, 4, 5},
              {2, 3, 1, 7},
              {4, 2, 1, 3}};
 int b[4][3] ={{5, 10, 15},
               {2, 5, 7},
               {4, 2, 6},
               {9, 4, 3}};
 int result, i, j,row,col, r1, c1, r2, c2, k;
 r1=3;
 c1=4;
 r2=4;
 c2=3;
 printf("Matrix 1\n");
 for(i=0; i<r1; i++)
 {
  for(j=0; j<c1; j++)
  {
   printf("%2d ", a[i][j]);
  }
  printf("\n");
 }
 printf("Matrix 2\n");
 for(i=0; i<r2; i++)
 {
  for(j=0; j<c2; j++)
  {
   printf("%2d ", b[i][j]);
  }
  printf("\n");
 }
 printf("Give row and column of the element to     display    from product matrix \n");
 printf("(assume index start from 0)\n");
 scanf("%d%d",&row,&col);
 if(row>=0 && row<r1 && col>=0 && col<c2 )
 {
  result=0;
  for(k=0; k<c1; k++)
  {
   result= result+a[row][k]*b[k][col];
  }
  printf("result is %d\n", result);
 }
 else
 printf("index out of range\n");
}

