/*header 42*/

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (!s || !n)
		return ;
	ft_memset(s, 0, n);
}
