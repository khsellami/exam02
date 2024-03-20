#include <stdio.h>
#include <stdlib.h>

int isprime(int n)
{
    int i = 2;
    if(n == 0 || n == 1)
        return 0;
    while(i < n)
    {
        if(n%i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac,char **av)
{
    int i;
    int nbr;
    if(ac == 2)
    {
        nbr = atoi(av[1]);
        i = 2;
        if(nbr == 1)
            printf("1");
        while(i <= nbr)
        {
            if(nbr % i == 0 && is_prime(i))
            {
                printf("%d", i);
                if(nbr == i)
                    break;
                printf("*");
                nbr = nbr / i;
                i = 2;
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}