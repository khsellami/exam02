#include <unistd.h>

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

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int a)
{
    if(a < 10)
        ft_putchar(a+'0');
    else
    {
        ft_putnbr(a / 10);
        ft_putnbr(a % 10);
    }
}

int	ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int signe = 1;
    
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-')
    {
        signe = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result*signe);        
}

// int main(int ac,char *av[])
// {
//     int sum=0;
//     if(ac==2)
//     {
//         int nbr=ft_atoi(av[1]);
        
//         while(nbr >= 0)
//         {
//             if(isprime(nbr))
//                 sum+=nbr;
//             nbr--;
//         }
//         ft_putnbr(sum);  
//     }
//     write(1,"0\n",2);
//     return 0;
// }