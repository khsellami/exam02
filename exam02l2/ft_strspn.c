
int charisexiste(char c, const char *s)
{
    int i = 0;
    while(s[i])
    {
        if(s[i] == c)
            return(1);
        i++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if(charisexiste(s[i], accept) == 0)
            break;
        i++;
    }
    return(i);
}

// int main() {
//     char str[] = "hello123hhh";
//     char accept[] = "abcdefghijklmnopqrstuvwxyz";

//     size_t len = strspn(str, accept);

//     printf("Longueur du préfixe de 'str' ne contenant que des lettres minuscules : %zu\n", len);

//     return 0;
// }
