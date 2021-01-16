/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 22:58:12 by flohrel           #+#    #+#             */
/*   Updated: 2021/01/16 15:54:23 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/conv.h"

static char	*ft_itoa2(unsigned long n, size_t len, size_t idx, t_bool is_negative)
{
	char		*str;
	static int	l = 0;

	if (n < 10)
	{
		str = malloc(sizeof(*str) * (len + 1));
		if (!str)
			return (str);
		str[len] = '\0';
		l = len;
		if (is_negative)
			str[idx + l++] = '-';
	}
	else
		str = ft_itoa2(n / 10, len + 1, idx - 1, is_negative);
	if (str)
		str[idx + l] = (n % 10) + '0';
	return (str);
}

char		*ft_itoa(long n)
{
	char			*str;
	static size_t	len = 0;
	static size_t	idx = 0;

	if (n < 0)
		str = ft_itoa2(-n, len + 2, idx - 2, TRUE);
	else
		str = ft_itoa2(n, len + 1, idx - 1, FALSE);
	len = 0;
	idx = 0;
	return (str);
}
