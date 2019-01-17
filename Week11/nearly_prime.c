#include <stdio.h>
int is_prime(int a);
int is_prime(int a)
{
        int i;
        if(a < 2)
                return(0);      /* a is not prime */
        for(i = 2; i < a; i++)
                if(a % i == 0)
                        return(0);  /* a is not prime because i divides a */

        
        return(1);      /*a is prime */
}

int main()
{
        int n, i,j,count=0;

        printf("enter the number ");
        scanf(" %d", &n);

        
        i =2;         /* 2 is the smallest prime */
        while(i<n)
 	{
    
         if(is_prime(n))
         {
          printf("PRIME\n");
          return 0;
         } 
        
         if(is_prime(i)) /* Calls the function is_prime() */
         {
		
	   j=2;
	   while(j<n)
           {
	    if(is_prime(j)) /* Calls the function is_prime() */
	    {
	     if(n==i*j) 
	     {	
               printf("NEARLY PRIME\n");
	       count++;
	       return 0;						
	     }
	    }			
	    j++;							
	   }
	  }
        i++;
        }        		
       if(count==0)
       printf(" FAR PRIME\n");
        printf("\n");
        return 0;
}
