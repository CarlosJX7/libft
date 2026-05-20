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

static int	ft_char_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_set;
	size_t	len_s1;
	char *str;
	size_t	i;
	i = 0;
	while (s1[i] && ft_char_inset(s1[i], set))
	{
		printf("%c\n", s1[i]);
		i++;
	}
}

int main(void)
{
	char *s1 = "aaaabbbaaabbaaaaaabbbaaaaaa";
	char *s2 = "ab";
	char *str;
	ft_strtrim(s1, s2);
	//printf(">%s<\n", str);
	//free(str);
	return 0;
}
