#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c,str[20];
   
   printf("enter the first string:");
   scanf(" %[^\n]s",str);
	
   while( str[i]!='\0' ) 
   {
      putchar(tolower(str[i]));
      i++;
   }
   }

   
