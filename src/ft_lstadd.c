/*header 42*/

#include "../libft.h"

void    ft_lstadd(t_list **alst, t_list *new)
{
    t_list  *cpy;

    if (!new)
        return ;
    if (!*alst)
    {
        *alst = ft_lstnew(new->content, new->content_size);
        return ;
    }
    cpy = *alst;
    while (cpy->next)
        cpy = cpy->next;
    cpy->next = new;
}
