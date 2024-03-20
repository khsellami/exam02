
void ft_swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// int main()
// {
//     int a;
//     int b;
//     a=2;
//     b=4;
//     ft_swap(&a,&b);
//     printf("%d----%d",a,b);
//     return 0;
// }