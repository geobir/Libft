/*header 42*/

#include "../libft.h"

int     ft_strcmp(const char *s1, const char *s2)
{
    size_t  i;

    if (!s1 || !s2)
        return (0);
    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (s1[i] != s2[i])
        return (s1[i] - s2[i]);
    return (0);
}
