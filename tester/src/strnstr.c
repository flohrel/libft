/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:23:28 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:47:07 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	strnstr_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	char	*(*f[2])(const char *, const char *, size_t) = { ft_strnstr, strnstr };
	char	str[20] = "untrucbidon!mvoyez?";
	char	test[5][2][10] = {
		{ "un", "0" },
		{ "un", "2" },
		{ "truc", "4" },
		{ "bidn", "20" },
		{ "mvoyez?", "20" }
	};

	(void)id;
	i = -1;
	while (++i < 5)
	{
		CHRONO(res = f[origin](str, test[i][0], atoi(test[i][1])));
		fprintf(file, "%s\n", res);
	}
}
