#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    t_list *temp;
    int size = 0;
    if(begin_list == NULL)
        return 0;
    temp = begin_list;
    while(temp->next != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}