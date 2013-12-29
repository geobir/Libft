/*header 42*/

#include "../libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    size_t  i;
    size_t  start;

    if (!dest || !src)
        return (NULL);
    start = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[start + i] = src[i];
        i++;
    }
    dest[start + i] = '\0';
    return (dest);
}
