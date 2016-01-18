#include "../tests.h"
/*
int ft_strlen_tests(void)
{
	return (-1);
}

int ft_strdup_tests(void)
{
	return (-1);
}

int ft_strcpy_tests(void)
{
	return (-1);
}

int ft_strncpy_tests(void)
{
	return (-1);
}

int ft_strcat_tests(void)
{
	return (-1);
}

int ft_strncat_tests(void)
{
	return (-1);
}

int ft_strlcat_tests(void)
{
	return (-1);
}

int ft_strchr_tests(void)
{
	return (-1);
}

int ft_strrchr_tests(void)
{
	return (-1);
}

int ft_strstr_tests(void)
{
	return (-1);
}

int ft_strnstr_tests(void)
{
	return (-1);
}

int ft_strcmp_tests(void)
{
	return (-1);
}

int ft_strncmp_tests(void)
{
	return (-1);
}

int ft_strnew_tests(void)
{
	return (-1);
}

int ft_strdel_tests(void)
{
	return (-1);
}

int ft_strclr_tests(void)
{
	return (-1);
}

int ft_striter_tests(void)
{
	return (-1);
}

int ft_striteri_tests(void)
{
	return (-1);
}

int ft_strmap_tests(void)
{
	return (-1);
}

int ft_strmapi_tests(void)
{
	return (-1);
}

int ft_strequ_tests(void)
{
	return (-1);
}

int ft_strnequ_tests(void)
{
	return (-1);
}
*/
int ft_strsub_tests(void)
{
	char	*sub;

	sub = ft_strsub("Bonjour", 3, 3);
	ft_putstr(sub);
	sub = NULL;
	ft_putchar('\n');
	sub = ft_strsub("	 Bonjour", 3, 3);
	ft_putstr(sub);
	sub = NULL;
	ft_putchar('\n');
	sub = ft_strsub("", 3, 3);
	ft_putstr(sub);
	sub = NULL;
	ft_putchar('\n');
	sub = ft_strsub("Bonjour", 3, 10);
	ft_putstr(sub);
	sub = NULL;
	ft_putchar('\n');
	sub = ft_strsub("Bonjour", 10, 3);
	ft_putstr(sub);
	sub = NULL;
	ft_putchar('\n');
	ft_strdel(&sub);
	return (0);
}
/*
int ft_strjoin_tests(void)
{
	char	*join;

	join = ft_strjoin("Bonjour", " les gens");
	ft_putstr(join);
	join = NULL;
	ft_putchar('\n');
	join = ft_strjoin("	 Bonjour", " les gens");
	ft_putstr(join);
	join = NULL;
	ft_putchar('\n');
	join = ft_strjoin("", " les gens");
	ft_putstr(join);
	join = NULL;
	ft_putchar('\n');
	join = ft_strjoin("", "");
	ft_putstr(join);
	join = NULL;
	ft_putchar('\n');
	join = ft_strjoin("Je ne sais plus trop quoi tester", ", donc je note n'importe quoi. Voila!!!");
	ft_putstr(join);
	join = NULL;
	ft_putchar('\n');
	ft_strdel(&join);
	return (0);
}

int ft_strtrim_tests(void)
{
	char	*trim;
	trim = ft_strtrim("Bonjour");
	ft_putstr(trim);
	trim = NULL;
	ft_putchar('\n');
	trim = ft_strtrim("	 Bonjour");
	ft_putstr(trim);
	trim = NULL;
	ft_putchar('\n');
	trim = ft_strtrim("Hello	 ");
	ft_putstr(trim);
	trim = NULL;
	ft_putchar('\n');
	trim = ft_strtrim("	Hello	 ");
	ft_putstr(trim);
	trim = NULL;
	ft_putchar('\n');
	trim = ft_strtrim("	Un test peut etre plu	s complexe	?	");
	ft_putstr(trim);
	trim = NULL;
	ft_putchar('\n');
	ft_strdel(&trim);
	return (0);
}
*/
int ft_strsplit_tests(void)
{
	char	**split;
	int	 i;

	i = 0;
	split = ft_strsplit("Part1 Part2	Part3	Part 4	", ' ');
	while (split[i] != '\0')
	{
		ft_putstr(split[i]);
		ft_putchar('\n');
		i++;
	}
/*
	split = NULL;
	i = 0;
	split = ft_strsplit("Part1 Part2 Part3 Part4 Part 5", ' ');
	while (split[i] != '\0')
	{
		ft_putchar('\n');
		ft_putstr(split[i]);
		ft_putchar('\n');
		i++;
	}

	split = NULL;
	i = 0;
	split = ft_strsplit("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z", ' ');
	while (split[i] != '\0')
	{
		ft_putchar('\n');
		ft_putstr(split[i]);
		ft_putchar('\n');
		i++;
	}
*/
	return (0);
}
