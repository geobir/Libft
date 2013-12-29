/*header 42*/

#include "../libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    if (!s || !len)
        return (NULL);
    sub = ft_strnew(len);
    i = 0;
    if (!sub)
        return (NULL);
    while (i < len)
    {
        sub[i] = s[start];
        i++;
        start++;
    }
    if (len < ft_strlen((char *)s))
        sub[i] = '\0';
    else
        sub[i] = s[start];
    return (sub);
}
