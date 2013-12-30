/*header 42*/

#include "../libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *new;

    if (!(new = (t_list*)malloc(sizeof(t_list))))
        return (NULL);
    new->content = NULL;
    new->content_size = NULL;
    new->next = NULL;
    return (new);
}
