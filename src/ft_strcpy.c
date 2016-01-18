/*header 42*/

#include "../libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	len;
	/*size_t	i;*/

	if (!dest || !src)
		return (NULL);
	/*i = 0;*/
	len = ft_strlen((char *)src) + 1;
	ft_memcpy(dest, src, len);
	/*
	if (ft_strlen(dest) < len)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];*/
	return (dest);
}
