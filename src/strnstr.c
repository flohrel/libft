/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 03:51:28 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/03 17:29:25 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lsize;

	if (!(lsize = ft_strlen(little)))
		return ((char *)big);
	if (len && (len -= (lsize - 1)) > 0)
	{
		while (len-- && *big)
		{
			if (!ft_strncmp(big, little, lsize))
				return ((char *)big);
			big++;
		}
	}
	return (NULL);
}
