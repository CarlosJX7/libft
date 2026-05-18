/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:57:57 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:57:59 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int ft_isspace(char c)
{
	if (c >= 9 && c <= 13 && c == ' ')
		return (1);
}

static int ft_is_sign(char c)
{
	if(c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		/* code */
	}
	
}

