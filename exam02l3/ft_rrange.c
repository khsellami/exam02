#include <stdlib.h>

int val_abs(int a,int b)
{
    if(a >= b)
        return(a - b);
    else
        return(b - a);
}
int     *ft_rrange(int start, int end)
{
    int len = val_abs(end, start) + 1;
    int *arr = malloc(len * sizeof(int));
    int i = 0;
    while(i < len)
    {
        if(start < end)
        {
            arr[i] = end;
            end--;
            i++;    
        }
        else
        {
            arr[i] = end;
            end++;
            i++;
        }
    }
    return arr;
}
// int main()
// {
//     int *arr=ft_rrange(0,-3);
//     int i=0;
//     while(i<4)
//     {
//         printf("%d  ",arr[i]);
//         i++;
//     }
//     return 0;
// }