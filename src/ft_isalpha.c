/*header 42*/

#include "../libft.h"

int     ft_isalpha(int c)
{
    if ((c < 65) || (c > 122))
        return (0);
    if ((c > 90) && (c < 97))
        return (0);
    return (1);
}
