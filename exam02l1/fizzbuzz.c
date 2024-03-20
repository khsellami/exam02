#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int a)
{
    if(a<10)
        ft_putchar(a+'0');
    else
    {
        ft_putnbr(a/10);
        ft_putnbr(a%10);
    }
}

int main(void)
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 10);
        else if(i % 3 == 0)
            write(1,"fizz\n",6);
        else if(i % 5 == 0)
            write(1,"buzz\n",6);
        else
        {
            ft_putnbr(i);
            write(1,"\n",1);
        }
        i++;
    }
    return 0;
}