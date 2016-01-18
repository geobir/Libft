/*header 42*/

#include "../libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	src_len = ft_strlen((char *)src);
	if (ft_strlen(dest) < n)
		return (NULL);
	ft_memcpy(dest, src, n);
	return (dest);
}
