#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;
	char *dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}

// {
// 	size_t	i;

// 	printf("\nDST: --> [%p]\n", dst);
// 	printf("SRC: --> [%p]\n", src);
// 	printf("LEN: --> [%li]\n================\n\n", len);

// 	if (!(dst) || !(src))
// 		return (0);
// 	i = 0;

// 	printf("SIZE_T DST: --> %li\t| SIZE_T SRC: --> %li\t| LEN: --> %li\n================\n\n", (size_t)dst, (size_t)src, len );
// 	printf("RESULT DST - SRC = %li\n", ((size_t)dst - (size_t)src));
// 	if ((size_t)dst - (size_t)src < len)
// 	{
// 		i = len - 1;

// 		printf("\nDST: --> [%s]\n", ((unsigned char *)dst));
// 		printf("SRC: --> [%s]\n\n", ((unsigned char *)src));
// 		while (i && i < len)
// 		{
// 			printf("\nI NO WHILE: --> %li\n", i);
// 			printf("DST[%li] --> %c\n", i, ((unsigned char *)dst)[i]);
// 			printf("SRC[%li] --> %c\n\n", i, ((unsigned char *)src)[i]);
// 			printf("SRC ANTES --> %s\n", (unsigned char *)src);
// 			printf("DST ANTES --> %s\n", (unsigned char *)dst);
// 			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
// 			printf("SRC APÓS  --> %s\n", ((unsigned char *)src));
// 			printf("DST APÓS  --> %s\n\n", ((unsigned char *)dst));
// 			i--;
// 		}
// 	}
// 	else
// 	{
// 		while (i < len)
// 		{
// 			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
// 			i++;
// 		}
// 	}
// 	return (dst);
// }

int main() {
    char src[] = "abcdef";
    char dst[10];
	char dst2[10];

    // Teste básico: copiar src para dst
    printf("Antes da ft_memmove:\n");
    printf("src:  %s\n", src);
    printf("dst:  %s\n", dst);
	printf("dst2: %s\n", dst2);

    ft_memmove(dst, src, 7); // 7 para copiar o '\0' também
	memmove(dst2, src, 7);

    printf("\nDepois da ft_memmove:\n");
    printf("src:  %s\n", src);
    printf("dst:  %s\n", dst);
	printf("dst2: %s\n", dst2);

    // Teste de sobreposição: mover dentro do mesmo buffer
    char buffer[20] = "1234567890";
	char buffer2[20] = "1234567890";
    printf("\nAntes da sobreposição:\n");
    printf("buffer:  %s\n", buffer);
	printf("buffer2: %s\n", buffer2);

    ft_memmove(buffer + 2, buffer, 8); // move "12345678" para posição 2
	memmove(buffer + 2, buffer, 8);

    printf("\nDepois da sobreposição:\n");
    printf("buffer:  %s\n", buffer);
	printf("buffer2: %s\n", buffer2);

    return 0;
}
