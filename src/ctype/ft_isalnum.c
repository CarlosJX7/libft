int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("libc: %d\n", isalnum('a'));
// 	printf("libt: %d\n\n", ft_isalnum('a'));
// 	printf("libc: %d\n", isalnum('A'));
// 	printf("libt: %d\n\n", ft_isalnum('A'));
// 	printf("libc: %d\n", isalnum('1'));
// 	printf("libt: %d\n\n", ft_isalnum('1'));
// 	printf("libc: %d\n", isalnum('!'));
// 	printf("libt: %d\n\n", ft_isalnum('!'));
// 	return 0;
// }