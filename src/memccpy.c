/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:52:03 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/14 18:16:23 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	ch = (unsigned char) c;
	while (n--)
		if ((*d++ = *s++) == ch)
			return (d);
	return (NULL);
}
