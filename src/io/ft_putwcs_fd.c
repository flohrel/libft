/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwcs_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 01:11:34 by flohrel           #+#    #+#             */
/*   Updated: 2021/02/16 20:22:39 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/io.h"

size_t	ft_putwcs_fd(wchar_t *wcs, int fd)
{
	int		count;

	count = 0;
	while (*wcs != L'\0')
	{
		count += ft_putwc_fd(*wcs, fd);
		wcs++;
	}
	return (count);
}
