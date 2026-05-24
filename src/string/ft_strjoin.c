/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:43:53 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:43:58 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		new_str[s1_len + i] = s2[i];
		i++;
	}
	new_str[s1_len + i] = '\0';
	return (new_str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str1 = NULL;
// 	char *str2 = "World!";
// 	printf("%s\n", ft_strjoin(str1, str2));
// 	return 0;
// }