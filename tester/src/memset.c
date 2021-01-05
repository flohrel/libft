/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:29:25 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:45:27 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	memset_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	char	str[10] = { 0 };
	void	*(*f[2])(void *, int, size_t) = { ft_memset, memset };

	(void)id;
	i = -1;
	while (++i < 10)
	{
		CHRONO(res = (char *)f[origin](str, i + '0', i));
		fprintf(file, "%s\n", res);
	}
}
