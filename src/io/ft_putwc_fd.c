/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwc_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 01:07:28 by flohrel           #+#    #+#             */
/*   Updated: 2021/02/16 20:22:04 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/io.h"

static void	ft_putwchar_4bytes(wchar_t c, int fd)
{
	unsigned char	byte;

	byte = (((c & 1835008) >> 18) + 240);
	write(fd, &byte, 1);
	byte = (((c & 258048) >> 12) + 128);
	write(fd, &byte, 1);
	byte = (((c & 4032) >> 6) + 128);
	write(fd, &byte, 1);
	byte = ((c & 63) + 128);
	write(fd, &byte, 1);
}

static void	ft_putwchar_3bytes(wchar_t c, int fd)
{
	unsigned char	byte;

	byte = (((c & 61440) >> 12) + 224);
	write(fd, &byte, 1);
	byte = (((c & 4032) >> 6) + 128);
	write(fd, &byte, 1);
	byte = ((c & 63) + 128);
	write(fd, &byte, 1);
}

static void	ft_putwchar_2bytes(wchar_t c, int fd)
{
	unsigned char	byte;

	byte = (((c & 1984) >> 6) + 48);
	write(fd, &byte, 1);
	byte = ((c & 63) + 128);
	write(fd, &byte, 1);
}

size_t		ft_putwchar_fd(wchar_t c, int fd)
{
	if (c & UTF_4BYTES_MASK)
		ft_putwchar_4bytes(c, fd);
	else if (c & UTF_3BYTES_MASK)
		ft_putwchar_3bytes(c, fd);
	else if (c & UTF_2BYTES_MASK)
		ft_putwchar_2bytes(c, fd);
	else
		ft_putchar_fd(c, fd);
	return (1);
}
