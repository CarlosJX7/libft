/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:43:38 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:43:39 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_move(unsigned char *new_dest, unsigned char *new_src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	if (dest == src || n == 0)
		return (dest);
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	i = 0;
	if (dest < src)
		ft_move(new_dest, new_src, n);
	return (dest);
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
// 		dest = ft_memmove(str2, str1, n);
// 		printf("Caso 1 (sin solapamiento): %s\n", dest);
// 	}
// 	{// memmove gestiona el solapamiento guardando el buffer > tmp
// 		char buffer[] = "HOLA1234";
// 		size_t n = 4;

// 		printf("Buffer antes: %s\n", buffer);
// 		memmove(buffer + 1, buffer, n);
// 		printf("Caso 2 (intentando solapamiento): %s\n", buffer);
// 	}
// 	return 0;
