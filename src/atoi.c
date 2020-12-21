/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:20:33 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/21 20:55:08 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char c)
{
	return ((c == ' ') || !((c > 13) || (c < 9)));
}

int			ft_atoi(const char *nptr)
{
	int nb;
	int sign;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (((*nptr == '-') || (*nptr == '+')) &&
		(*nptr++ == '-'))
		sign = -sign;
	nb = 0;
	while (ft_isdigit(*nptr))
	{
		if (nb > ((INT_MAX / 10) - *nptr + '0'))
			return (0);
		nb = (nb * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * nb);
}
