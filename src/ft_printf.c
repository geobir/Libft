/*header 42*/

#include "../libft.h"

static void	s_ft_print_nbr(int n, int *i)
{
	char	*nb;
	int		neg;
	size_t	len;

	nb = "";
	neg = 0;
	if (n < 0)
	{
		neg = -1;
		n *= -1;
	}
	while (n != 0)
	{
		nb = ft_strappend(nb, ((n % 10) + 48));
		n = n - (n % 10);
		n /= 10;
	}
	if (neg < 0)
		nb = ft_strappend(nb, '-');
	len = ft_strlen(nb);
	*i += len - 1;
	while (len > 0)
		ft_putchar(nb[--len]);
}

static void	s_ft_print_str(char *s, int *i)
{
	if (!s)
		return ;
	ft_putstr(s);
	*i += ft_strlen((char *)s) - 1;
}

static void	s_ft_print_addr(void *p, int *i)
{
	char	*addr;
	size_t	len;

	if (!p)
		return ;
	addr = ft_itohex((int)p);
	len = ft_strlen(addr);
	ft_putstr(addr);
}

static int	s_ft_printf(int c, void *content, int *read)
{
	if (c == '\0')
		return (0);
	if (c == 's')
		s_ft_print_str((char*)content, read);
	if (c == 'd')
		s_ft_print_nbr((int)content, read);
	if (c == 'c')
		ft_putchar((int)content);
	if (c == '%')
		ft_putchar(c);
	if (c == 'p')
		s_ft_print_addr(&content, &read);
	*read += 1;
	return (1);
}

int			ft_printf(const char *format, ...)
{
	size_t	read;
	size_t	i;
	va_list args;

	va_start(args, format);
	read = 0;
	i = 0;
	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{
			i++;
			if (s_ft_printf(format[i], va_arg(args, void *), &read))
				i++;
		}
		if (format[i] == '\0')
			break ;
		ft_putchar(format[i]);
		i++;
		read++;
	}
	va_end(args);
	return (read);
}
