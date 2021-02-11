/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:57:05 by flohrel           #+#    #+#             */
/*   Updated: 2021/02/11 01:42:59 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

size_t	ft_wcslen(const wchar_t *wcs)
{
	const wchar_t *w;

	w = wcs;
	while (*w != L'\0')
		w++;
	return (w - wcs);
}
