/*header 42*/

#include "../libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	if (!size)
		return (NULL);
	alloc = malloc(size);
	if (!alloc)
		return (NULL);
	return (alloc);
}
