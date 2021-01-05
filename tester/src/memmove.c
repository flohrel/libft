/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:46:58 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:18 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	memmove_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	void	*(*f[2])(void *, const void *, size_t) = { ft_memmove, memmove };
	char	str[22] = "untrucbidon!mvoyez?10";
	char	*test[3] = { str, &str[10], str };
	int		size[3] = { 0, 8, 10 };

	(void)id;
	i = -1;
	while (++i < 3)
	{
		CHRONO(res = f[origin](&str[7], test[i], size[i]));
		fprintf(file, "%s\n", res);
	}
}
