/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:11:00 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:45:59 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	memccpy_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	void	*(*f[2])(void *, const void *, int, size_t) = { ft_memccpy, memccpy };
	char	dest[20] = "untrucbidon!mvoyez?";
	char	src[20] = "pasevidentdetrouver";
	int		test[5][2] = {
		{ 'u', 1 },
		{ 'n', 11 },
		{ '!', 12 },
		{ 'n', 20 },
		{ 'z', 20 }
	};

	(void)id;
	i = -1;
	while (++i < 5)
	{
		CHRONO(res = f[origin](dest, src, test[i][0], test[i][1]));
		fprintf(file, "%s | %s\n", res, dest);
	}
}
