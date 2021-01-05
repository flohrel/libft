/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:38:32 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/07 17:44:08 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int		error(const char *prog_name)
{
	fprintf(stdout, "%s: %s\n", prog_name, strerror(errno));
	return (errno);
}

int		abort(void)
{
	fprintf(stdout, "No parameter found. Exiting.");
	return (1);
}

void	title_disp(FILE *file, char *fname)
{
	fprintf(file[i], "\t=====> %s <=====\n\n", list[j].name[i]);
}

void	time_disp(void)
{
	fprintf(file[i], "\nExecution time: %f seconds", exec_time);
	fprintf(file[i], "\n========================================\n\n");
}
