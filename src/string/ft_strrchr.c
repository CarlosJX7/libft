/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:49:49 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 15:49:50 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	char		ch;

	ch = (char)c;
	last = NULL;
	while (*s)
	{
		if (*s == ch)
			last = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last);
}
