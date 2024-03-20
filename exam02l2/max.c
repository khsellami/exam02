
int		max(int* tab, unsigned int len)
{
    if(len==0)
        return 0;
    unsigned int max = tab[0];
    unsigned int i = 1;
    while(i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;

    }
    return max;

}
// int main()
// {
//     int tab[6]={1,6,2,1,10,11};
//     printf("%d",max(tab,6));
//     return 0;
// }