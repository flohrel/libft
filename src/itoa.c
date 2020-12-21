/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 22:58:12 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/14 18:48:43 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	g_len = 0;
static int	g_idx = 0;

static char	*ft_itoa2(long n, t_bool is_negative)
{
	char	*str;

	g_len++;
	if (n < 10)
	{
		str = malloc(sizeof(*str) * (g_len + 1));
		if (!str)
			return (str);
		str[g_len] = '\0';
		if (is_negative)
			str[g_idx++] = '-';
	}
	else
		str = ft_itoa2(n / 10, is_negative);
	if (str)
		str[g_idx++] = (n % 10) + '0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;

	if (n < 0)
	{
		g_len++;
		str = ft_itoa2(-(long)n, TRUE);
	}
	else
		str = ft_itoa2(n, FALSE);
	g_len = 0;
	g_idx = 0;
	return (str);
}
