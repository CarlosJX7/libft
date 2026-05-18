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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*srce;
	char	*dest;
	size_t	i;

	tmp = malloc(sizeof(char) * n);
	if (!tmp)
		return (NULL);
	srce = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		tmp[i] = srce[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = tmp[i];
		i++;
	}
	free(tmp);
	return ((void *)dest);
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
// 		printf("Caso 2 (con solapamiento): %s\n", buffer);
// 	}
// 	return 0;
// }
