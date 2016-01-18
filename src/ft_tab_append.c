/*header 42*/

#include "../libft.h"

char	**ft_tab_append(char **tab, char const *s)
{
	char	**append;
	size_t	len;
	size_t	i;

	if (!tab)
	{
		if (!(append = (char**)ft_memalloc(sizeof(**tab) * (2))))
			return (NULL);
		append[0] = ft_strdup(s);
		append[1] = '\0';
		return (append);
	}
	i = 0;
	len = 0;
	while (tab[len] != '\0')
		len++;
	if (!(append = (char**)malloc(sizeof(**tab) * (len + 2))))
		return (NULL);
	while (tab[i] != '\0')
		append[i] = ft_strdup(tab[i++]);
	append[i] = ft_strdup(s);
	append[i + 1] = '\0';
	return (append);
}
