#include "../../libft.h"

int	ft_isprint(int c)
{
	return ((unsigned char)c >= 32 && (unsigned char)c <= 126);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	int i;
// 	int libt, libc;

// 	i = -128;
// 	while (i <= 255)
// 	{
// 		libt = isprint((unsigned char)i);
// 		libc = ft_isprint(i);

// 		if ((libt != 0) != (libc != 0))
// 		{
// 			printf("Error en i=%d\n", i);
// 			printf("libc: %d\n", libt);
// 			printf("libt: %d\n", libc);
// 			return 1;
// 		}
// 		i++;
// 	}
// 	printf("Terminado sin errores\n");
// 	return 0;
// }
