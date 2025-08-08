#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;
	int count;

	count = 1;


	printf("S: --> [%s]\tC: -->[%d]\n", s, c);

	ini = s;
	printf("ini: --> [%s]\n", ini);
	i = ft_strlen(s);
	printf("i: --> [%d]\n", i);
	s = (s + i);
	printf("s: --> [%s]\n", s);
	if (c > 127)
		c %= 256;
	while (s >= ini && (c != *s || c % 256 != *s))
	{
		printf("count --> [%d]\n", count);
		printf("*s --> '%c' - %i \t| *ini --> '%c' - %i \t| c --> '%c' - %d \t\n", *s, *s, *ini, *ini, c, c);
		count++;
		s--;
	}
	printf("OUT OF THE WHILE: *s --> '%c' - %i \t| *ini --> '%c' - %i \t| c --> '%c' - %d \t\n", *s, *s, *ini, *ini, c, c);
	if (c == *s)
	{
		printf("Entered the last if C --> [%c]\tS --> [%c]\n", c, *s);
		return ((char *)s);
	}
	return (0);
}


int	main(void)
{

	const char s[] = "pepe y cparlos";
	char *ptr;

	printf("1125: %c\t\t1125 %% 256: %c\n\n---------\n", 1125, 1024 % 256);

	printf("%c\n\n---------\n", 128);
	ptr = ft_strrchr(s, 'c');
	printf("main chamando ft_strrchr: --> [%s]\n", ptr);
	return 0;

}
