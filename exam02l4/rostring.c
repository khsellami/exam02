#include <unistd.h>
void    rostring(char *s)
{
    int        i = 0;
    int        first_word_length = 0;
    while (s[i])
    { 
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        if (s[i] && !(s[i] == ' ' || s[i] == '\t'))
        {   
            if (first_word_length == 0)
                while (s[i] && !(s[i] == ' ' || s[i] == '\t'))
                {
                    first_word_length++;
                    i++;
                }
            else
            {
                while (s[i] && !(s[i] == ' ' || s[i] == '\t'))
                {
                    write(1, &s[i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
        }
    }
    i = 0;
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (first_word_length > 0)
    {
        write(1, &s[i], 1);
        first_word_length--;
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1 && *av[1])
        rostring(av[1]);
    write(1, "\n", 1);
    return (0);
}