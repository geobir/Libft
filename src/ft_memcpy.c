/*header 42*/

#include "../libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *dst;
    char    *source;
    size_t  i;

    if (!dest || !src)
        return (NULL);
    dst = (char*)dest;
    source = (char*)src;
    i = 0;
    while (i < n)
    {
        dst[i] = source[i];
        i++;
    }
    return ((void*)dst);
}
