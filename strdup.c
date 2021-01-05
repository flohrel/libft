/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:13:14 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/14 19:49:07 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*dup;
	size_t	len;

	len = ft_strlen(s);
	dup = malloc(sizeof(*dup) * (len + 1));
	if (!dup)
		return (dup);
	d = dup;
	while (len--)
		*d++ = *s++;
	*d = '\0';
	return (dup);
}
