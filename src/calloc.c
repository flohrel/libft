/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:35:35 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/10 20:48:24 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	tsize;

	if (((nmemb > MAXSQRT) || (size > MAXSQRT)) &&
		((SIZE_MAX / nmemb) < size))
		return (NULL);
	tsize = nmemb * size;
	ptr = malloc(tsize);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, tsize);
	return (ptr);
}
