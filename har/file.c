#include <stdio.h>
int main()
{
   int n;
   FILE *fptr;
   fptr=fopen("C:\\program.txt","w");
   if(fptr==NULL){
      printf("Error!");   
               
   }
   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);   
   fclose(fptr);
   return 0;
}
