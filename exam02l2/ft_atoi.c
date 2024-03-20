
int	ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int signe = 1;
    
    while(str[i] ==' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-')
    {
        signe = -1;
        i++;
    }
    while(str[i] >= '0' &&str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result*signe);       
}
// int main()
// {
//     printf("%d",ft_atoi("      -1234tgfr"));
//     return 0;
// }