/*header 42*/

#include "../libft.h"

char	*from_remind(char **remind)
{
	size_t	i;
	char	*res;

	i = 0;
	while (*remind[i] != '\0')
	{
		if (*remind[i] != '\n')
		{
			res = ft_strncpy(res, *remind, i - 1);
			res[i] = '\0';
			*remind = ft_strchr(*remind, '\n');
			return (res);
		}
		i++;
	}
}

char	*ft_read_line(int const fd, char **line)
{
	static char		*remind = NULL;
	int				rd;
	int				i;
	char			buf[MAX_BUFF_SIZE + 1];
	char			*tmp;

	i = 0;
	rd = 0;
	if (!remind)
		rd = read(fd, buf, MAX_BUFF_SIZE);
		while (i < rd)
		{
			if ((buf[i] == '\0') || (buf[i] == '\n'))
			{
				if (!(*line = ft_strdup(tmp)))
					*line = "";
				else
					ft_strdel(&tmp);
				if(!(*line = ft_strncpy(*line, buf, i)))
					*line = "";
				*line = ft_strdup(buf);
			}
			if (!(remind = ft_strchr(buf, '\n')))
			i++;
		}

		/** algo
		read x bytes
		IF memory contains something
			search within memory
		ELSE
			search in buff
		IF buff || memory contains '\n'
			copy before '\n' to *line
			store / add left content to memory
		ELSE
			read x more bytes
		*/

	while (!(remind = ft_strchr(buf, '\n')) || (buf[i] != '\0'))
	{
		if (!(remind = ft_strchr(buf, '\n')))
		if (buf[i] == '\0')
		{
			if(!(*line = ft_strncpy(*line, buf, i - 1)))
				*line = "";
		}
		i++;
	}
	return (NULL);
}

int		get_next_line(int const fd, char **line)
{
	int		i;
	char	buf[MAX_BUFF_SIZE];
	char	*tmp;

	tmp = ft_strnew(MAX_BUFF_SIZE);
	if (!tmp)
		return (0);
	i = 0;
	while (read(fd, buf, MAX_BUFF_SIZE))
	{
		if ((buf[0] == '\0') || (buf[0] == '\n'))
		{
			tmp[i] = '\0';
			if (!(*line = ft_strdup(tmp)))
				*line = "";
			else
				ft_strdel(&tmp);
			if (buf[0] == '\n')
				return (1);
			return (0);
		}
		tmp = ft_strappend(tmp, buf[0]);
		i++;
	}
	if (!(*line = ft_strdup(tmp)))
		*line = "";
	else
		ft_strdel(&tmp);
	return (0);
}
