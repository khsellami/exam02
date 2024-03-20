#include <stdlib.h>

int val_abs(int a,int b)
{
    if(a >= b)
        return(a - b);
    else
        return(b - a);
}

int     *ft_range(int start, int end)
{
   int len = val_abs(end, start) + 1;
   int *arr = malloc(len * sizeof(int));
   int i = 0;
    while(i < len)
    {
        if(start < end)
        {
            arr[i] = start;
            start++;
            i++;
        }
        else
        {
            arr[i] = start;
            start--;
            i++;
        }
    }
    return arr;
}
// int main()
// {
//     int i=0;
//     int *arr=ft_range(0,-3);
//     while(i < 4)
//     {
//         printf("%d ",arr[i]);
//         i++;
//     }
//     return 0;
// }