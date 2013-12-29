/*header 42*/

#include "../libft.h"

int     ft_isupper(int c)
{
    if ((c < 65) && (c > 90))
        return (0);
    return (1);
}
