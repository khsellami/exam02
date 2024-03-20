
typedef struct s_list{
    int data;
    struct s_list *next;

}t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *temp;
    temp=lst;
    int e;
    while(lst->next != NULL)
    {
        if((*cmp)(lst->data,lst->next->data) == 0)
        {
            e = lst->data;
            lst->data = lst->next->data;
            lst->next->data = e;
            lst=temp;
        }
        else
            lst=lst->next;
    }
    lst = temp;
    return lst;

}