#include "../libft.h"

int	 ft_memset_tests()
{
	char	*str;
	char	*s;
	int	 ok;

	str = NULL;
	ok = 0;
	str = (char*)malloc(sizeof(*str) * BIGLEN);
	str = ft_memset(str, 'n', BIGLEN);
	s = (char*)malloc(sizeof(*str) * BIGLEN);
	s = memset(s, 'n', BIGLEN);
	if	(memcmp(s, str, BIGLEN))
		ok += 1;
	free(str);
	free(s);
	str = (char*)malloc(sizeof(*str) * BIGLEN);
	str = ft_memset(str, 'z', NULLLEN);
	s = (char*)malloc(sizeof(*str) * BIGLEN);
	s = memset(s, 'z', NULLLEN);
	if	(memcmp(s, str, NULLLEN))
		ok += 2;
	free(str);
	free(s);
	str = (char*)malloc(sizeof(*str) * BIGLEN);
	str = ft_memset(str, 'b', LEN);
	s = (char*)malloc(sizeof(*str) * BIGLEN);
	s = memset(s, 'b', LEN);
	if	(memcmp(s, str, LEN))
		ok += 4;
	free(str);
	free(s);
	return (ok);
}

int	ft_bzero_tests()
{
	char	*str;
	int	 ok;

	ok = 0;
	str = NULL;
	str = (char*)malloc(sizeof(*str) * NEGLEN);
	ft_bzero(str, NEGLEN);
	if (str != NULL)
		ok += 1;
	free(str);
	str = (char*)malloc(sizeof(*str) * NULLLEN);
	ft_bzero(str, NULLLEN);
	if (!str)
		ok += 2;
	free(str);
	str = (char*)malloc(sizeof(*str) * LEN);
	ft_bzero(str, LEN);
	if (!str)
		ok += 3;
	free(str);
	str = (char*)malloc(sizeof(*str) * BIGLEN);
	ft_bzero(str, BIGLEN);
	if (!str)
		ok += 4;
	free(str);
	return (ok);
}

int	 ft_memcpy_tests()
{
	char	*str;
	int	 ok;


	ok = 0;
	str = (char*)malloc(sizeof(*str) * LEN);
	if (memcmp(
				ft_memcpy(str, "source", LEN)
				, "source"
				, LEN)
		)
		ok += 1;
	if (memcmp(
				ft_memcpy(str, "", LEN)
				, ""
				, LEN)
		)
		ok += 2;
	if (memcmp(
				ft_memcpy(str, "	source", LEN)
				, "	source"
				, LEN)
		)
		ok += 4;
	free(str);
	return (ok);
}

int ft_memccpy_tests()
{
	char	*str;
	int	 ok;

	ok = 0;
	/*str = NULL;*/
	str = (char*)malloc(sizeof(*str) * LEN);
	/*
	printf("custom : %s\n", (char*)ft_memccpy(str, "Exemple", 'w', LEN));
	printf("origin : %s\n", (char*)memccpy(str, "Exemple", 'w', LEN));
	printf("custom : %s\n", (char*)ft_memccpy(str, "", 'w', LEN));
	printf("origin : %s\n", (char*)memccpy(str, "", 'w', LEN));
	printf("custom : %s\n", (char*)ft_memccpy(str, "	 Exemple", '\0', LEN));
	printf("origin : %s\n", (char*)memccpy(str, "	 Exemple", '\0', LEN));
	printf("custom : %s\n", (char*)ft_memccpy(str, "Ex	em ple", ' ', LEN));
	printf("origin : %s\n", (char*)memccpy(str, "Ex	em ple", ' ', LEN));
	*/
	if	(memcmp(
				ft_memccpy(str, "source", 'o', LEN)
				, memccpy(str, "source", 'o', LEN)
				, LEN)
		 )
		ok += 1;
	if	(ft_memcmp(
				ft_memccpy(str, "source", 'p', LEN)
				, memccpy(str, "source", 'p', LEN)
				, LEN)
		 )
		ok += 2;
	if	(ft_memcmp(
				ft_memccpy(str, "source", '\0', LEN)
				, memccpy(str, "source", '\0', LEN)
				, LEN)
		 )
		ok += 4;
	free(str);
	return (ok);
}

int ft_memmove_tests()
{
	char	*str;
	int	 ok;

	ok = 0;
	str = (char*)malloc(sizeof(*str) * LEN);
	if	(memcmp(
				ft_memmove(str, "source", LEN)
				, memmove(str, "source", LEN)
				, LEN)
		 )
		ok += 1;
	if	(memcmp(
				ft_memmove(str, "source", LEN)
				, memmove(str, "source", LEN)
				, LEN)
		 )
		ok += 2;
	if	(memcmp(
				ft_memmove(str, "source", LEN)
				, memmove(str, "source", LEN)
				, LEN)
		 )
		ok += 4;
	free(str);
	return (ok);
}

int ft_memchr_tests()
{
	int	 ok;

	ok = 0;
	/*
	printf("custom : %s\n", (char*)ft_memchr("Exemple", 'w', LEN));
	printf("origin : %s\n", (char*)memchr("Exemple", 'w', LEN));
	printf("custom : %s\n", (char*)ft_memchr("", 'w', LEN));
	printf("origin : %s\n", (char*)memchr("", 'w', LEN));
	printf("custom : %s\n", (char*)ft_memchr("	 Exemple", 'e', LEN));
	printf("origin : %s\n", (char*)memchr("	 Exemple", 'e', LEN));
	printf("custom : %s\n", (char*)ft_memchr("Ex	em ple", ' ', LEN));
	printf("origin : %s\n", (char*)memchr("Ex	em ple", ' ', LEN));
	*/
	return (ok);
}

int ft_memcmp_tests()
{
	int	 ok;

	ok = 0;
	if	(memcmp("Bonjour", "Bonjour", LEN) == ft_memcmp("Bonjour", "Bonjour", LEN))
		ok += 1;
	if	(memcmp("Bonjour", "Bonj", LEN) == ft_memcmp("Bonjour", "Bonj", LEN))
		ok += 2;
	if	(memcmp("Bonjour", "", LEN) == ft_memcmp("Bonjour", "", LEN))
		ok += 4;
	if	(memcmp("", "Bonjour", LEN) == ft_memcmp("", "Bonjour", LEN))
		ok += 8;
	if	(memcmp("", "", LEN) == ft_memcmp("", "", LEN))
		ok += 16;
	return (ok);
}
