/*header 42*/

#include "../libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	start;

	if (!dest || !src)
		return (NULL);
	start = ft_strlen(dest);
	i = 0;
	while (i < n)
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
