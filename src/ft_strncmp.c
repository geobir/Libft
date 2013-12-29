/*header 42*/

#include "../libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    if (!s1 || !s2 || !n)
        return (0);
    i = 0;
    return (ft_memcmp(s1, s2, n));
}
