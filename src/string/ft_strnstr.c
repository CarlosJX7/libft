/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:40:15 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:40:16 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_find_word(const char *str, const char *word)
{
	size_t	len_word;
	size_t	i;

	i = 0;
	len_word = ft_strlen(word);
	while (str[i] && i < len_word)
	{
		if (str[i] != word[i])
			return (0);
		i++;
	}
	if (len_word == i)
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (ft_find_word(&haystack[i], needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
