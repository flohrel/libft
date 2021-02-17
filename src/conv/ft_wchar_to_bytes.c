/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_to_bytes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:14:27 by flohrel           #+#    #+#             */
/*   Updated: 2021/02/16 20:20:44 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft/conv.h"

static unsigned char	*ft_wchar_to_4bytes(wchar_t c)
{
	unsigned char	*res;

	res = ft_calloc(4, sizeof(char));
	if (!res)
		return (NULL);
	res[0] = (((c & 1835008) >> 18) + 240);
	res[1] = (((c & 258048) >> 12) + 128);
	res[2] = (((c & 4032) >> 6) + 128);
	res[3] = ((c & 63) + 128);
	return (res);
}

static unsigned char	*ft_wchar_to_3bytes(wchar_t c)
{
	unsigned char	*res;

	res = ft_calloc(3, sizeof(char));
	if (!res)
		return (NULL);
	res[0] = (((c & 61440) >> 12) + 224);
	res[1] = (((c & 4032) >> 6) + 128);
	res[2] = ((c & 63) + 128);
	return (res);
}

static unsigned char	*ft_wchar_to_2bytes(wchar_t c)
{
	unsigned char	*res;

	res = ft_calloc(2, sizeof(char));
	if (!res)
		return (NULL);
	res[0] = (((c & 1984) >> 6) + 48);
	res[1] = ((c & 63) + 128);
	return (res);
}

unsigned char			*ft_wchar_to_bytes(wchar_t c)
{
	unsigned char	*res;

	if (c & UTF_4BYTES_MASK)
		res = ft_wchar_to_4bytes(c);
	else if (c & UTF_3BYTES_MASK)
		res = ft_wchar_to_3bytes(c);
	else if (c & UTF_2BYTES_MASK)
		res = ft_wchar_to_2bytes(c);
	else
	{
		res = ft_calloc(1, sizeof(char));
		if (!res)
			return (NULL);
		res[0] = (unsigned char)c;
	}
	return (res);
}
