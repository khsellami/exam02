#include <unistd.h>
int ft_strlen(char *str)
{
    int len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

int	iter(char *str, char c, int len)
{
	int	i = 0;
	while (str[i] && i < len )
		if (str[i++] == c)
			return (1);
	return (0);
}

int main(int ac,char *av[])
{
    int i = 0;
    if(ac == 3)
    {
        while(av[1][i])
        {
            if(!iter(av[1],av[1][i],i))
                write(1,&av[1][i],1);
            i++;
        }
        i=0;
        while(av[2][i])
        {
            if(!iter(av[1],av[2][i],ft_strlen(av[1])) && !iter(av[2],av[2][i],i))
                write(1,&av[2][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}