/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:14:27 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 19:09:13 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

t_func	list[21] =
{
/*	  test fun		  user name		libc name		id	*/
	{ atoi_test,	{ "ft_atoi",	"atoi" },		0 },
	{ bzero_test,	{ "ft_bzero",	"bzero" },		0 },
	{ isfun_test,	{ "ft_isalnum",	"isalnum" },	0 },
	{ isfun_test,	{ "ft_isalpha",	"isalpha" },	1 },
	{ isfun_test,	{ "ft_isascii",	"isascii" },	2 },
	{ isfun_test,	{ "ft_isdigit",	"isdigit" },	3 },
	{ isfun_test,	{ "ft_isprint",	"isprint" },	4 },
	{ memccpy_test,	{ "ft_memccpy",	"memccpy" },	0 },
	{ memchr_test,	{ "ft_memchr",	"memchr" },		0 },
	{ memcmp_test,	{ "ft_memcmp",	"memcmp" },		0 },
	{ memcpy_test,	{ "ft_memcpy",	"memcpy" },		0 },
	{ memmove_test,	{ "ft_memmove",	"memmove" },	0 },
	{ memset_test,	{ "ft_memset",	"memset" },		0 },
	{ strchr_test,	{ "ft_strchr",	"strchr" },		0 },
	{ strlfun_test,	{ "ft_strlcat",	"strlcat" },	0 },
	{ strlfun_test,	{ "ft_strlcpy",	"strlcpy" },	1 },
	{ strncmp_test,	{ "ft_strncmp",	"strncmp" },	1 },
	{ strnstr_test,	{ "ft_strnstr",	"strnstr" },	0 },
	{ strchr_test,	{ "ft_strrchr",	"strrchr" },	1 },
	{ tofun_test,	{ "ft_tolower",	"tolower" },	0 },
	{ tofun_test,	{ "ft_toupper",	"toupper" },	1 }
};

int	libc_test()
{
	int		i;
	int		j;
	FILE	*outfile[2];

	if (!(outfile[USER] = fopen(USER_OUT, "w")) ||
		!(outfile[LIBC] = fopen(LIBC_OUT, "w")))
		return (error(av[0]));
	j = -1;
	while (++j < 21)
	{
		i = -1;
		while (++i < 2)
		{
			title_disp(outfile[i], list[j].name[i]);
			exec_time = 0;
			CHRONO(list[j].test(outfile[i], i, list[j].id));
			time_disp();
		}
	}
	if (fclose(outfile[USER]) ||
		fclose(outfile[LIBC]))
		return (error(av[0]));
	return (0);
}
