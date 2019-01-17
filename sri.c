#include <stdio.h>

int main()
{
  char str[30];
  char *p;

  p = str;

  printf("Enter a word: ");
  scanf("%s", str);
  
  while (*p != '\0')
  {
    printf("%p: %s\n", p, p);
    p = p + 1;
  } 

  return(0);
}
