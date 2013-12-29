/*header 42*/

#include "../libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;
    char    *chr;

    if (!s)
        return (NULL);
    chr = (char *)s;
    i = 0;
    while (i < ft_strlen(chr))
    {
        if (chr[i] == c)
            return (&chr[i]);
        i++;
    }
    if (chr[i] == c)
            return (&chr[i]);
    return (NULL);
}
