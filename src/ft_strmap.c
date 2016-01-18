/*header 42*/

#include "../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		map[i] = f(s[i]);
		i++;
	}
	map[i] = f(s[i]);
	return (map);
}
