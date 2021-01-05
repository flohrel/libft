/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:20:33 by flohrel           #+#    #+#             */
/*   Updated: 2021/01/05 11:16:44 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char c)
{
	return ((c == ' ') || !((c > 13) || (c < 9)));
}

static int	check_overflow(int nb, int nptr, int sign)
{
	unsigned int n;

	if (sign > 0)
		n = (INT_MAX - nptr + '0') / 10;
	else
		n = (-INT_MIN - nptr + '0') / 10;
	if (nb > n)
		return (1);
	return (0);
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
		if (check_overflow(nb, *nptr, sign))
			return (0);
		nb = (nb * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * nb);
}
