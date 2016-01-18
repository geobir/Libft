/*header 42*/

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dst;
	char	*source;
	size_t	i;

	if (!dest || !src || !n)
		return (NULL);
	dst = (char*)dest;
	source = (char*)src;
	i = 0;
	while (i < n)
	{
		if (source[i] == c)
		{
			dst[i] = source[i];
			return ((void*)&dst[i + 1]);
		}
		dst[i] = source[i];
		i++;
	}
	return (NULL);
}
