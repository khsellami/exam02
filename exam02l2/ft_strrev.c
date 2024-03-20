
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
char    *ft_strrev(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;
    char temp;
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return(str);
}
// int main()
// {
//     char str[]="khadija";
//     printf("%s",ft_strrev(str));
//     return 0;
// }