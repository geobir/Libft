/*header 42*/

#include "../libft.h"

void	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
