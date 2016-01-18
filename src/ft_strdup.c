/*header 42*/

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)s);
	if (!(dup = ft_strnew(len)))
		return (ft_strnew(1));
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = s[i];
	return (dup);
}
