/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:56:49 by flohrel           #+#    #+#             */
/*   Updated: 2021/02/16 20:17:53 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

# include <stdint.h>
# include <stddef.h>
# include <limits.h>

# define TRUE		1
# define FALSE		0

# define UTF_4BYTES_MASK 0x1F0000
# define UTF_3BYTES_MASK 0xF800
# define UTF_2BYTES_MASK 0x780

typedef char	t_bool;

#endif
