/*header 42*/

#include "../libft.h"

int		ft_strisnb(const char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (str[0] == '-')
			str++;
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
