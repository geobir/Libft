/*header 42*/

#include "../libft.h"

char	*ft_itohex(int n)
{
	char	*tmp;
	char	*hex;
	int		len;
	int		i;
	char	c;

	tmp = "";
	i = 0;
	len = 0;
	if (n < 0)
		return (NULL);
	while (n != 0)
	{
		(c = (ft_isdigit((n % 16) + 48)) ? (n % 16) + 48 : (n % 16) + 55);
		tmp = ft_strappend(tmp, c);
		n = n - (n % 16);
		n /= 16;
		len++;
	}
	hex = ft_strnew(len);
	while (len > 0)
	{
		hex[i] = tmp[len - 1];
		len--;
		i++;
	}
	hex[i] = '\O';
	return (hex);
}
