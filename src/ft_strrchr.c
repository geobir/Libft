/*header 42*/

#include "../libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;
    char    *chr;

    if (!s)
        return (NULL);
    chr = (char *)s;
    i = ft_strlen(chr);
    while (i > 0)
    {
        if (chr[i] == c)
            return (&chr[i]);
        i--;
    }
    if (chr[i] == c)
            return (&chr[i]);
    return (NULL);
}
