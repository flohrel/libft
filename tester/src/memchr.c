/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:04:32 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:04 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	memchr_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	void	*(*f[2])(const void *, int, size_t) = { ft_memchr, memchr };
	char	str[20] = "untrucbidon!mvoyez?";
	int		test[5][2] = {
		{ 'u', 0 },
		{ 'n', 10 },
		{ '!', 11 },
		{ 'z', 20 },
		{ '-', 20 }
	};

	(void)id;
	i = -1;
	while (++i < 5)
	{
		CHRONO(res = f[origin](str, test[i][0], test[i][1]));
		fprintf(file, "%s\n", res);
	}
}
