#include <unistd.h>

void	ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int main(int ac,char **av)
{
    int i = 1;
    int n;
    if(ac == 2)
    {
        n = atoi(av[1]);
        while(i < 10)
        {
            ft_putnbr(i);
            write(1, "x", 1);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(i * n);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}