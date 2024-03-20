#include <unistd.h>

int ft_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int main(int argc,char *argv[])
{
    int i = 0;
    int j = 0;
    if(argc==2)
    {
        while(argv[1][i])
        {
            if(ft_isalpha(argv[1][i]))
            {
                if(ft_islower(argv[1][i]))
                    j = argv[1][i] - 'a' + 1;
                else if(ft_isupper(argv[1][i]))
                    j = argv[1][i] - 'A' + 1;
                else
                    write(1,&argv[1][i],1);
                while(j > 0)
                {
                    write(1,&argv[1][i],1);
                    j--;
                }
            }
            else
                write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}