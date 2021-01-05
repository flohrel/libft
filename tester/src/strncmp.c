/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:41:11 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:58 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	strncmp_test(FILE *file, int origin, int id)
{
	int		i;
	int		res;
	int		(*f[2])(const char *, const char *, size_t) = { ft_strncmp, strncmp };
	char	str[20] = "untrucbidon!mvoyez?";
	char	test[5][2][20] = {
		{ "untrucbidon!mvoyez?", "0" },
		{ "untrucbidon!mvoyez?", "15" },
		{ "pasevidentdetrouver", "0" },
		{ "pasevidentdetrouver", "15" },
		{ "untrucbidon!mvoyez ", "19" }
	};

	(void)id;
	i = -1;
	while (++i < 5)
	{
		CHRONO(res = f[origin](str, test[i][0], atoi(test[i][1])));
		fprintf(file, "%d\n", res);
	}
}
