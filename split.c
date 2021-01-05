/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:52:36 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/14 19:53:33 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	g_tlen = 0;

static char	*ft_strndup(char *s, size_t len)
{
	char	*str;

	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (str);
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}

static char	**sstr_alloc(void)
{
	char	**sstr;

	sstr = malloc(sizeof(*sstr) * (g_tlen + 1));
	sstr[g_tlen] = NULL;
	return (sstr);
}

char	**ft_split(char const *s, char c)
{
	char	*sptr;
	char	**sstr;

	if (!s)
		return (NULL);
	sptr = (char *)s;
	while (1)
	{
		if ((*sptr == c) || !(*sptr))
		{
			if (sptr - s)
			{
				g_tlen++;
				sstr = ft_split(sptr + 1, c);
				g_tlen--;
				if (sstr)
					sstr[g_tlen] = ft_strndup((char *)s, sptr - s);
				return (sstr);
			}
			if (!(*sptr))
				return (sstr_alloc());
			return (ft_split(sptr + 1, c));
		}
		sptr++;
	}
}
