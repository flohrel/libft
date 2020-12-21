/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:20:33 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 19:51:16 by flohrel          ###   ########.fr       */
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
		nb = (nb * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * nb);
}
