/*header 42*/

#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char*)ft_memalloc(sizeof(*new) * (size + 1));
	ft_bzero(new, size + 1);
	return (new);
}
