/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:01:53 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/02 20:18:32 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*sptr;

	sptr = s + ft_strlen(s);
	while (sptr >= s)
	{
		if (*sptr == c)
			return ((char *)sptr);
		sptr--;
	}
	return (NULL);
}
