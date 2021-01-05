/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:07:14 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:44:19 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

t_opt	opt = { 0, 0, 0 };
clock_t	cpu_ticks = 0;
double	exec_time = 0;

int	main(int ac, char **av)
{
	int c;
	int ret;

	while ((c = getopt(ac, av, "ablo")) != -1)
	{
		switch (c)
		{
			case 'a':
				opt.bonus = 1;
				opt.libc = 1;
				opt.other = 1;
				break ;
			case 'b':
				opt.bonus = 1;
			case 'l':
				opt.libc = 1;
			case 'o':
				opt.other = 1;
			default:
				return (abort());
		}
	}
	ret = 0;
	if (opt.libc)
		ret += libc_test();
	if (opt.other)
		ret += other_test();
	if (opt.bonus)
		ret += bonus_test();
	return (ret);
}
