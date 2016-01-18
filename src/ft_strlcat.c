/*header 42*/

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	start;

	if (!dest || !src)
		return (0);
	if (size < ft_strlen(dest))
		return (ft_strlen(dest) + ft_strlen((char *)src));
	start = ft_strlen(dest);
	i = 0;
	while ((start + i) < size)
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (ft_strlen(dest));
}
