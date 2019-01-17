#include <stdio.h>
int is_prime(int a);
/*
        The function is_prime() accepts an integer and returns
        1 if it is prime and 0 otherwise.
*/
int is_prime(int a)
{
        int i;
        if(a < 2)
                return(0);      /* a is not prime */
        for(i = 2; i < a; i++)
                if(a % i == 0)
                        return(0);  /* a is not prime because i divides a */

        /* If the program reaches here, 
        it means that no number from 2 to a-1  divides a */
        return(1);      /*a is prime */
}

int main()
{
        int n, i, count;

        printf("How many prime numbers do you need? ");
        scanf(" %d", &n);

        count = 0;      /* Counts the number of primes printed so far */
        i = 2;          /* 2 is the smallest prime */
        while(count < n)
        {
                if(is_prime(i)) /* Calls the function is_prime() */
                {
                        printf("%d, ", i);
                        count++;
                }
        i++;
        }
        printf("...\n\n");
        return 0;
}

