/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isfun.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:55:44 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/23 03:17:20 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

clock_t	cpu_ticks = 0;
double	exec_time = 0;

int	isfun_test(int id, enum e_type source)
{
	int		i;
	int		res;
	int		ret;
	int		(*f[5][2])(int) = {
		{ ft_isalnum, isalnum },
		{ ft_isalpha, isalpha },
		{ ft_isascii, isascii },
		{ ft_isdigit, isdigit },
		{ ft_isprint, isprint }
	};
	FILE	*file;
	
	file = fopen("rsrc/isfun.txt", "w");
	if (!file)
		return (1);
	i = ' ';
	while (++i < 127)
	{
		CHRONO(res = f[id][source](i));
		if (ret)
			ret /= ret;
		fprintf(file, "%c:%d\n", i, res);
	}
	fprintf(file, "exec time = %lfs", exec_time);
	if (!fclose(file))
		return (1);
	return (0);
}

int	main(void)
{
	int	ret;

	ret = isfun_test(1, USER);
	return (ret);
}
