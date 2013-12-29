/*header 42*/

#include "../libft.h"

char    *ft_strappend(char const *s, int c)
{
    char    *append;
    size_t  len;
    size_t  i;

    if (!s)
        return (NULL);
    i = 0;
    len = ft_strlen((char *)s);
    append = ft_strnew(len + 1);
    if (!append)
        return (NULL);
    while (s[i] != '\0')
    {
        append[i] = s[i];
        i++;
    }
    append[i] = c;
    append[i + 1] = '\0';
    return (append);
}
