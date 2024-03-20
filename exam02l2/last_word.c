#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while(*str!='\0')
    {
        len++;
        str++;
    }
    return len;
}

int main(int argc,char *argv[])
{
    int i = 0;
    if(argc == 2)
    {
        if(argv[1][i] != '\0')
        {
            i = ft_strlen(argv[1]) - 1;
            while(i > 0 && (argv[1][i]==' ' || argv[1][i]== 9))
                i--;
            int fin = i;
            while(i > 0 && (argv[1][i] != ' ' && argv[1][i] != 9) ) 
                i--;
            int start = i + 1;
            while(start <= fin)
            {
                write(1,&argv[1][start],1);
                start++;
            }
        }
    }
    write(1,"\n",1);
    return 0;
}