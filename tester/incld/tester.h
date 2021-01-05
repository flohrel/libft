/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:01:13 by flohrel           #+#    #+#             */
/*   Updated: 2020/12/23 03:23:46 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>
# include <bsd/string.h>
# include <time.h>
# include <ctype.h>
# include <unistd.h>

/*
 *	OUTPUT FILE
*/
# define USER_OUT "rsrc/user_out"
# define LIBC_OUT "rsrc/libc_out"

enum			e_type { USER, LIBC };

typedef struct	s_opt
{
	int	libc;
	int	other;
	int	bonus;
}				t_opt;

typedef struct	s_func
{
	void	(*test)(FILE *, int, int);
	char	*name[1];
	int		id;
}				t_func;

extern t_opt	opt;
extern FILE		*outfile[2];

/*
 *	DISPLAY FUNC
*/
int		error_disp(const char *prog_name);
void	output_disp(FILE *file, char *fname);

/*
 *	TEST FUNC
*/
void	atoi_test(FILE *file, int origin, int id);
void	bzero_test(FILE *file, int origin, int id);
int		isfun_test(int id, enum e_type source);
void	memccpy_test(FILE *file, int origin, int id);
void	memchr_test(FILE *file, int origin, int id);
void	memcmp_test(FILE *file, int origin, int id);
void	memcpy_test(FILE *file, int origin, int id);
void	memmove_test(FILE *file, int origin, int id);
void	memset_test(FILE *file, int origin, int id);
void	strchr_test(FILE *file, int origin, int id);
void	strlfun_test(FILE *file, int origin, int fd);
void	strncmp_test(FILE *file, int origin, int fd);
void	strnstr_test(FILE *file, int origin, int fd);
void	tofun_test(FILE *file, int origin, int fd);

/*
 *	CHRONO MACRO
*/
extern clock_t	cpu_ticks;
extern double	exec_time;

# define CHRONO(function)	cpu_ticks = clock(); \
							function; \
							cpu_ticks = clock() - cpu_ticks; \
							exec_time += (double)cpu_ticks / CLOCKS_PER_SEC

# define ABS(x)				(x < 0) ? -x : x

#endif
