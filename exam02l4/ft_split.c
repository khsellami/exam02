#include <stdlib.h>

int check_sep(char c)
{
    if(c == 32 || (c >= 9 && c <= 13 ))
        return(1);
    if(c == '\0')
        return(1);
    return(0);
}
int count_w(char *s)
{
    int i = 0;
    int count;
    while(s[i])
    {
        while(s[i] && check_sep(s[i]))
            i++;
        if(s[i] != '\0')
            count++;
        while(s[i] && !check_sep(s[i]))
            i++;
    }
    return (count);   
}
int strlen_sep(char *str)
{
    int i;
    while(str[i] && !check_sep(str[i]))
        i++;
    return(i);
}
char *fill_word(char *s)
{
    int i = 0;
    int len = strlen_sep(s);
    char *word;
    word=malloc(len +1);
    
    while(s[i] && !check_sep(s[i]))
    {
        word[i]=s[i];
        i++;
    }
    word[i]='\0';
    return(word);
}
char    **ft_split(char *str)
{
    char    **strings;
    int        i;

    i = 0;
    strings = (char **)malloc(sizeof(char *)
            * (count_w(str) + 1));
    while (*str != '\0')
    {
        while (*str != '\0' && check_sep(*str))
            str++;
        if (*str != '\0')
        {
            strings[i] = fill_word(str);
            i++;
        }
        while (*str && !check_sep(*str))
            str++;
    }
    strings[i] = 0;
    return (strings);
}