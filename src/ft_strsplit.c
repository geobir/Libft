/*header 42*/

#include "../libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	char	*cpy;
	char	*add;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	split = NULL;
	add = ft_strnew(1);
	cpy = s;
	while (*cpy == c)
		cpy++;
	if (!ft_strchr(cpy, c))
		return (NULL);
	while (*cpy)
	{
		if (*cpy == c)
		{
			split = ft_tab_append(split, add);
			add = ft_strnew(1);
			while (*cpy == c)
				cpy++;
		}
		add = ft_strappend(add, *cpy);
		cpy++;
	}
	split = ft_tab_append(split, add);
	return (split);
}
