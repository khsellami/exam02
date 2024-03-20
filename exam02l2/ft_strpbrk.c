
int charisexiste(char c,const char *s)
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

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i=0;
    while(s1[i])
    {
        if(charisexiste(s1[i], s2))
            return((char*)(s1 + i));
        i++;
    }
    return(NULL);

}

// int main() {
//     char str[] = "This is a sample string.";
//     char accept[] = "aeiou";

//     char *result = ft_strpbrk(str, accept);

//     if (result != NULL) {
//         printf("Le premier caractère voyelle trouvé : %c\n", *result);
//     } else {
//         printf("Aucune voyelle n'a été trouvée.\n");
//     }

//     return 0;
// }
