/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 00:50:37 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/02 20:17:31 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*end;

	end = s + ft_strlen(s);
	while (s <= end)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
