/*header 42*/

#include "../libft.h"

int     ft_islimit_min(const char *str)
{
    if ((!str) || (!ft_strcmp(str, "-2147483648")))
        return (0);
    return (1);
}

int     ft_islimit_max(const char *str)
{
    if ((!str) || (!ft_strcmp(str, "2147483647")))
        return (0);
    return (1);
}

int     ft_atoi(const char *str)
{
    char    *cpy;
    size_t  i;
    int     atoi;
    int     neg;

    if (!str)
        return (0);
    cpy = ft_strtrim(str);
    i = 0;
    atoi = 0;
    neg = 1;
    while (cpy[i] != '\0')
    {
        if ((cpy[0] == '-') && !i)
            neg = -1;
        if (((cpy[0] == '-') || (cpy[0] == '+')) && !i)
            i++;
        if (!ft_isdigit(cpy[i]))
            break ;
        atoi = (10 * atoi) + (cpy[i] - 48);
        i++;
    }
    return (atoi * neg);
}

char    *ft_itoa(int nb)
{
    char    *s;
    int     i;

    if (nb < 0 && (nb *= -1))
        *s++ = '-';

    while (nb)
    {
        i = ft_entlen(nb);
        *s = (nb / ft_pow(10, i - 1)) + '0';
        nb %= ft_pow(10, i - 1);
        s =+ 1;
    }
}




