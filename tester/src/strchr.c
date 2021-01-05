/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:04:32 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:46:32 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	strchr_test(FILE *file, int origin, int id)
{
	int		i;
	char	*res;
	char	*(*f[2][2])(const char *, int) = {
		{ ft_strchr, strchr },
		{ ft_strrchr, strrchr }
	};
	char	str[20] = "untrucbidon!mvoyez?";
	int		test[5] = { 'u', 'n', 'o', '-', '\0' };

	i = -1;
	while (++i < 5)
	{
		CHRONO(res = f[id][origin](str, test[i]));
		fprintf(file, "%s\n", res);
	}
}
