#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	printf("DST: --> [%p]\n", dst);
	printf("SRC: --> [%p]\n", src);
	printf("LEN: --> [%li]\n================\n\n", len);

	if (!(dst) || !(src))
		return (0);
	i = 0;

	printf("SIZE_T DST: --> %li\t| SIZE_T SRC: --> %li\t| LEN: --> %li\n================\n\n", (size_t)dst, (size_t)src, len );
	if ((size_t)dst - (size_t)src < len)
	{
		printf("ENTROU NO IF\n");

		i = len - 1;
		printf("I: --> %li\t | LEN: --> %li\n", i, len);

		while (i && i < len)
		{
			printf("I NO WHILE: --> %li\n================\n\n", i);
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		printf("ENTROU NO ELSE\n");
		while (i < len)
		{
			printf("I NO WHILE: --> %li\n================\n\n", i);
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	printf("DST: --> %p\n================\n\n", dst);
	return (dst);
}

int main(void)
{
	char src[] = "123456";
	char *dst;

	dst = ft_memmove(dst, src, 4);
	printf("DST NA MAIN: --> %p\n", dst);

	return 0;
}
