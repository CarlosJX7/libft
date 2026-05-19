/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:44:27 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:44:28 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	//char *str;
	i = 0;
	while (s1[i])
	{
		if (ft_strnstr(&s1[i], set, ft_strlen(set)))
		{
			i += ft_strlen(set);
		}
		printf("%c\n", s1[i]);
		i++;
	}
	return (NULL);
}

int main(void)
{
	char *s1 = "aaabbbaaaa";
	char *s2 = "bbb";
	ft_strtrim(s1, s2);
	return 0;
}
