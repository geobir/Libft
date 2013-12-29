/*header 42*/

#include "../libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
    t_list  *tmp;

    if (!alst || !del)
        return ;
<<<<<<< HEAD:ft_lstdelone.c
    tmp = (((*alst)->next) ? (*alst)->next : NULL);
    del((*alst)->content, (*alst)->content_size);
    *alst = NULL;
    free(alst);
    *alst = tmp;
=======
    cpy = *alst;
    del(cpy->content, cpy->content_size);
    cpy->next = NULL;
    free(*alst);
    *alst = NULL;
>>>>>>> Last modification most test ok:src/ft_lstdelone.c
}
