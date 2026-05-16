#include "../../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srce;

	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	{
// 		char str1[] = "AAAA";
// 		char str2[] = "BBBB";
// 		char *dest;
// 		size_t n = 2;
// 		dest = ft_memcpy(str2, str1, n);
// 		printf("Caso 1 (sin solapamiento): %s\n", dest);
// 	}
// 	{// memcpy no gestiona el solapamiento
// 		char buffer[] = "HOLA1234";
// 		size_t n = 4;

// 		printf("Buffer antes: %s\n", buffer);
// 		ft_memcpy(buffer + 1, buffer, n);
// 		printf("Caso 2 (con solapamiento): %s\n", buffer);
// 	}
// 	return 0;
// }