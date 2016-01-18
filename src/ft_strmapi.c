/*header 42*/

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	map = ft_strnew(ft_strlen((char *)s));
	if (!map)
		return (NULL);
	while (s[i] != '\0')
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = f(i, s[i]);
	return (map);
}
