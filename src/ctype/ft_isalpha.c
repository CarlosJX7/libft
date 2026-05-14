#include "../../libft.h"

int ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("libc: %d\n", isalpha('a'));
// 	printf("libt: %d\n\n", ft_isalpha('a'));
// 	printf("libc: %d\n", isalpha('A'));
// 	printf("libt: %d\n\n", ft_isalpha('A'));
// 	printf("libc: %d\n", isalpha('!'));
// 	printf("libt: %d\n\n", ft_isalpha('!'));
// 	return 0;
// }
