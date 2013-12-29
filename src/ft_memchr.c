/*header 42*/

#include "../libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *cpy;
    size_t  i;

    if (!s)
        return (NULL);
    cpy = (char*)s;
    i = 0;
    while (i < n)
    {
        if (cpy[i] == c)
            return ((void*)&cpy[i]);
        i++;
    }
    return (NULL);
}
