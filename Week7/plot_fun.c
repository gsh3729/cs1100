#include <stdio.h>
#include <math.h>

int main()
{
  FILE *p;
  float x, y;
  int i;
  
  p = fopen("data03.txt", "w");	/* Open a file to write the final data */
  if (p == 0)                   /* Check if the file was opened correctly */
  {
    printf("Error in opening the file\n");
    return(1);
  }
  for(i = 0; i <=100; i++)
  {
    x = 2.0 * 3.14159265 * i / 100.0;	/*x takes values from 0 to 2pi in 101 steps */
    y = sin(x);
    fprintf(p, "%f\t%f\n", x, y);     /* Write the data to file */
  }

  fclose(p);	/* Close the file */
  return(0);
}
