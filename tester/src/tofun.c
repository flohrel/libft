/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tofun.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:43:25 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:47:20 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	tofun_test(FILE *file, int origin, int id)
{
	int		i;
	char	res;
	int		(*f[2][2])(int) = {
		{ ft_tolower, tolower },
		{ ft_toupper, toupper }
	};
	int		c[10] = { '\t', '0', 'A', 'e', 'Y', 'z', ' ', '!', 3245, -248 };

	(void)id;
	i = -1;
	while (++i < 10)
	{
		CHRONO(res = f[id][origin](c[i]));
		fprintf(file, "%c\n", res);
	}
}
