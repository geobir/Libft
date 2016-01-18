/*header 42*/

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i1;
	size_t	i2;

	if (!s1 || !n)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	i1 = 0;
	i2 = 0;
	while ((i1 < ft_strlen((char *)s1)) && (i1 < n))
	{
		while (s1[i1 + i2] == s2[i2])
			i2++;
		if (i2 == ft_strlen((char *)s2))
			return ((char *)&s1[i1 - i2]);
		i1++;
		i2 = 0;
	}
	return (NULL);
}
