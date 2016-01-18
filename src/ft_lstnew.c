/*header 42*/

#include "../libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(*new))))
		return (NULL);
	if (!(new->content = (void*)malloc(sizeof(*content) * content_size)))
		return (NULL);
	new->content = content;
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
