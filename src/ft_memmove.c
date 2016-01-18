/*header 42*/

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*cpy;
	size_t	i;

	if (!dest || !src || !n)
		return (NULL);
	cpy = (char*)malloc(sizeof(*cpy) * n);
	if (!cpy)
		return (NULL);
	dst = (char*)dest;
	cpy = (char*)ft_memcpy(cpy, src, n);
	i = 0;
	while (i < n)
	{
		dst[i] = cpy[i];
		i++;
	}
	return ((void*)dst);
}
