/*header 42*/

#include "../libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	s = ft_memset(s, 0, ft_strlen(s));
}
