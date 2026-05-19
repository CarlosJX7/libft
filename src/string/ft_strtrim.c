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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char *mem;
	//char *str;
	i = 0;
	//mem = ft_strnstr(s1, set, ft_strlen(s1));
	while (s1[i])
	{
		//printf("%p & %p\n", mem, &s1[i]);
		if (ft_find_word(&s1[i], set))
		{
			i += ft_strlen(set);
		}
		i++;
	}
	mem = malloc(sizeof(char) * i);
	i = 0;
	j = 0;
	while (s1[i])
	{
		//printf("%p & %p\n", mem, &s1[i]);
		if (ft_find_word(&s1[i], set))
		{
			i += ft_strlen(set);
		}
		mem[j] = s1[i];
		//printf("%c\n", s1[i]);
		i++;
		j++;
	}
	return (mem);
}

int main(void)
{
	char *s1 = "aaaabbbaaabbaaaaaabbbaaaaaa";
	char *s2 = "bbb";
	char *str;
	str = ft_strtrim(s1, s2);
	printf(">%s<\n", str);
	free(str);
	return 0;
}
