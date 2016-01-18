/*header 42*/

#include "../libft.h"

size_t	ft_get_start_index(char const *s)
{
	size_t	index;

	if (!s)
		return (0);
	index = 0;
	while (ft_isblank(s[index]) && (s[index] != '\0'))
		index++;
	return (index);
}

size_t	ft_get_end_index(char const *s)
{
	size_t	index;

	if (!s)
		return (0);
	index = ft_strlen((char *)s);
	while (ft_isblank(s[index]))
		index--;
	return (index);
}

char	*ft_strtrim(char const *s)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	start = ft_get_start_index(s);
	end = ft_get_end_index(s);
	len = end - start;
	trim = ft_strnew(len);
	if (!trim)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trim[i] = s[i + start];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
