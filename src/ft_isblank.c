/*header 42*/

#include "../libft.h"

int		ft_isblank(int c)
{
	if ((c != 9) && (c != 32))
		return (0);
	return (1);
}
