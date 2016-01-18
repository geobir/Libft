/*header 42*/

#include "../libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cpy;
	t_list	*tmp;

	if (!alst || !del)
		return ;
	cpy = *alst;
	while (cpy->next)
	{
		tmp = cpy->next;
		ft_lstdelone(&cpy, del);
		cpy = tmp;
	}
	ft_lstdelone(&cpy, del);
	free(*alst);
	*alst = NULL;
}
