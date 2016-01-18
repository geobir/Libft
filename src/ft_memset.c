/*header 42*/

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cpy;

	i = 0;
	if (!s)
		return (NULL);
	cpy = (char*)s;
	while (i < n)
	{
		*(cpy + i) = (unsigned char)c;
		i++;
	}
	return ((void *)s);
}
