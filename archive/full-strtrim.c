/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full-strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:13:22 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/10 21:12:19 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	g_tlen = 0;

static int	is_charset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*salloc(void)
{
	char		*str;

	str = malloc(sizeof(*str) * (g_tlen + 1));
	str[g_tlen] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*sptr;
	char	*str;
	size_t	len;

	sptr = (char *)s1;
	while (1)
	{
		if (is_charset(*sptr, (char *)set) || !(*sptr))
		{
			if ((len = sptr - s1))
			{
				g_tlen += len;
				if (!(*sptr))
					sptr--;
				str = ft_strtrim(sptr + 1, set);
				g_tlen -= len;
				ft_memcpy(&str[g_tlen], s1, len);
				return (str);
			}
			if (!(*sptr))
				return (salloc());
			return (ft_strtrim(sptr + 1, set));
		}
		sptr++;
	}
}
