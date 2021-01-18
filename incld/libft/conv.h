/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:32:40 by flohrel           #+#    #+#             */
/*   Updated: 2021/01/18 15:19:06 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_H
# define CONV_H

# include "type.h"
# include "ctype.h"
# include "memory.h"

int			ft_atoi(const char *nptr);
char		*ft_itoa(int n);
char		*ft_ltoa(long n);
char		*ft_ltoa_base(long n, char *base);

#endif
