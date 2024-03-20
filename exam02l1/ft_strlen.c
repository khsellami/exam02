
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
// int main()
// {
//     printf("%d",ft_strlen("abc"));
//     return 0;
// }