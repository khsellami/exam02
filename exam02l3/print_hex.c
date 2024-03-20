#include <unistd.h>
#include <stdlib.h>

void print_hex(int n)
{
    char base[] = "0123456789abcdef";
    if(n >= 16)
        print_hex(n / 16);
    write(1, &base[n % 16], 1);
}

int main(int ac, char **av)
{
    int nbr;
    if(ac == 2)
    {
        nbr = atoi(av[1]);
        print_hex(nbr);
    }
    write(1,"\n",1);
    return 0;
}