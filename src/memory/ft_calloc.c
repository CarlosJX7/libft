/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:43:21 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:43:22 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			total;

	if (count != 0 && size > 18446744073709551615UL / count)
		return (NULL);
	total = count * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	while (total-- > 0)
		mem[total] = 0;
	return ((void *)mem);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
int main(void)
{
	char *mem1;
	char *mem2;
	size_t count;
	size_t size;
	int i;
	count = 16  * 1000;
	size = 16;
	printf("=== ft_calloc ===\n");
	mem1 = ft_calloc(1024ULL * 1024 * 1024, 4);
	if (!mem1)
	{
		printf("Error\n");
		return (1);
	}
	i = 0;
	while (i < 4)
	{
		printf("%d\n", mem1[i]);
		i++;
	}
	free(mem1);
	printf("\n=== calloc original ===\n");
	mem2 = calloc(1024ULL * 1024 * 1024, 4);
	if (!mem2)
		return (1);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", mem2[i]);
		i++;
	}
	free(mem2);
	return (0);
}
