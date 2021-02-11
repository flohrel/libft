/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwcs_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 01:11:34 by flohrel           #+#    #+#             */
/*   Updated: 2021/02/11 01:39:00 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/io.h"

size_t	ft_putwcs_fd(wchar_t *wcs, int fd)
{
	int	size;

	size = sizeof(wchar_t);
	return (write(fd, wcs, ft_wcslen(wcs) * size) / size);
}
