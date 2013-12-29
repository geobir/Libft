/*header 42*/

#include "../libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    int     len;

    if (!s1 || !s2)
        return (NULL);
    len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
    join = ft_strnew(len);
    if (!join)
        return (ft_strnew(1));
    join = ft_strcpy(join, s1);
    if (!join)
        return (NULL);
    join = ft_strncat(join, s2, len);
    return (join);
}
