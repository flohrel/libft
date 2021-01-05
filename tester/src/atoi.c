/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:06:56 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:45:33 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	atoi_test(FILE *file, int origin, int id)
{
	int		i;
	int		res;
	int		(*f[2])(const char *) = { ft_atoi, atoi };
	char	str[10][12] =
	{
		"0",
		" \t\f\r\n\v42",
		"+128",
		" + 256",
		"+-512",
		"--1024",
		"-2048AB56",
		"4096 27",
		"8192-97",
		"-2147483648"
	};

	(void)id;
	i = -1;
	while (++i < 10)
	{
		CHRONO(res = f[origin](str[i]));
		fprintf(file, "%d\n", res);
	}
}
