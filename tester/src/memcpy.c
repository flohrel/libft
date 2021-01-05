/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:41:38 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:13 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	memcpy_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	void	*(*f[2])(void *, const void *, size_t) = { ft_memcpy, memcpy };
	char	str[20] = "untrucbidon!mvoyez?";
	char	test[3][2][20] = {
		{ "pasevidentdetrouver", "0" },
		{ "pasevidentdetrouver", "20" },
		{ "untrucbidon!mvoyez?", "12" }
	};

	(void)id;
	i = -1;
	while (++i < 3)
	{
		CHRONO(res = f[origin](str, test[i][0], atoi(test[i][1])));
		fprintf(file, "%s\n", res);
	}
}
