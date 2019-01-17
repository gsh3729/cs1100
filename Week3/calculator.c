#include <stdio.h>
int main()
{
 float x,y,ans;
 char op;
 while(1)
 {
  scanf("%f %c %f", &x, &op, &y);
  if (op == '+')
  {
   ans = x + y;
   printf("%g\n\n", ans);
  }
  else if (op == '-')
  {
   ans = x - y;
   printf("%g\n\n",ans);
  else if (op == '*')
  {
   ans = x*y;
   printf("%g\n\n",ans);
  }
  else if(op == '/')
  {
   if (y==0)
   printf("impossible operator");
   ans = x/y;
   printf("%g\n\n",ans);
  else
  {
   printf("Syntax error.\n\n");
  }
 }
 return 0;
}
