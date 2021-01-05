/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlfun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:17:34 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:48 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	strlfun_test(FILE *file, int origin, int id)
{
	int		i;
	size_t	res;
	size_t	(*f[2][2])(char *, const char *, size_t) = {
		{ ft_strlcat, strlcat },
		{ ft_strlcpy, strlcpy }
	};
	char	dest[50] = "";
	char	src[5][2][12] = {
		{ "", "10" },
		{ "pasevident", "10" },
		{ "detrouver", "30" },
		{ "untrucbidon", "20" },
		{ "!m'voyez?", "0" }
	};

	i = -1;
	while (++i < 5)
	{
		CHRONO(res = f[id][origin](dest, src[i][0], atoi(src[i][1])));
		fprintf(file, "%s | %ld\n", dest, res);
	}
}
