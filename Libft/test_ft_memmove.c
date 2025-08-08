#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*dest;

	tmp = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (tmp == dest || n == 0)
		return (dst);
	if (tmp < dest)
	{
		while (n)
		{
			dest[n - 1] = tmp[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}

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
	char buffer3[20] = "1234567890";
	char buffer4[] = "lorem ipsum dolor sit amet";
	char buffer5[] = "lorem ipsum dolor sit amet";
	char *dest;
	char *dest2;

	dest = buffer4 + 1;
	dest2 = buffer5 + 1;
    printf("\nAntes da sobreposição:\n");
    printf("buffer:  %s\n", buffer);
	printf("buffer2: %s\n", buffer2);

    ft_memmove(buffer, buffer + 2, 8); // move "12345678" para posição 2
	memmove(buffer2, buffer2 + 2, 8);

    printf("\nDepois da sobreposição:\n");
    printf("buffer:  %s\n", buffer);
	printf("buffer2: %s\n", buffer2);


	if (buffer3 != ft_memmove(buffer3, buffer3 + 2, 8))
		printf("dest's adress was not returned\n");
	printf("\nBuffer3: %s\n", buffer3);

	if (buffer4 != ft_memmove(buffer4, dest, 8))
		printf("dest's adress was not returned\n");
	printf("\nDest:    %s\n", dest);
	printf("Buffer4: %s\n", buffer4);

	if (buffer5 != memmove(buffer5, dest2, 8))
		printf("dest2's adress was not returned\n");
	printf("\ndest2:   %s\n", dest2);
	printf("Buffer5: %s\n", buffer5);

    return 0;
}
