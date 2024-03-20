#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
		return;
    t_list *curr;
    curr = *begin_list;
    while(*curr->next!=NULL)
    {
        if(cmp(curr->data,data_ref)==0)
        {
            *begin_list = curr->next;
		    free(curr);
		    ft_list_remove_if(begin_list, data_ref, cmp);
        }  
        else
        {
		    curr = *begin_list;
		    ft_list_remove_if(&curr->next, data_ref, cmp);
        }
    }
}