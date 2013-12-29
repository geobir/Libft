/*header 42*/

#include "../libft.h"

int     ft_pow(int nb, int pow)
{
    int     res;
    int     i;

    if (!nb || !pow)
        return (0);
    res = 1;
    i = 0;
    while (i < pow)
    {
        res *= nb;
        i++;
    }
    return (res);
}
