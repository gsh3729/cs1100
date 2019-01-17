#include <stdio.h>
int main()
{
 int i=0,j=0;
 char str[30],sri[30];
 char *p;
 p = str;
 printf("Enter a word: ");
 scanf("%s", str);
 while (*p != '\0')
 {
  printf("%p: %s\n", p, p);
  p = p + 1;
 } 
 p = str;
 while (*p != '\0')
 {
  if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
  i++;
  
  else
  {
   sri[j]=*p;
   j++;
  }
  p++;
 }
 printf("no of vowels is %d\n",i);
 printf("with out vowels is %s\n",sri);
}
