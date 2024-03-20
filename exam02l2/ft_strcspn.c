
size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}
size_t ispresent(char c,const char *str)
{
    size_t i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while(s[i])
    {
        if(ispresent(s[i],reject) == 1)
            return i;
        i++;
    }
    return(ft_strlen(s));
}
// #include <stdio.h>

// int main() {
//     char str[] = "abcdefg1234";
//     char invalid[] = "1234567890";

//     size_t len = ft_strcspn(str, invalid);

//     printf("Longueur de la sous-chaîne sans chiffres: %zu\n", len);

//     return 0;
// }
