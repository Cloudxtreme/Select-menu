/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:33:30 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:33:32 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<string.h>

size_t					ft_str_len(const void *s)
{
	unsigned			x;
	char				*buf;

	buf = (char *) s;
	while (0x01)
		{
			x = *(unsigned *) buf;
			if ((x & 0xFF) == 0x00)
				return (buf - (char *) s);
			if ((x & 0xFF00) == 0x00)
				return (buf - (char *) s + 0x01);
			if ((x & 0xFF0000) == 0x00)
				return (buf - (char *) s + 0x02);
			if ((x & 0xFF000000) == 0x00)
				return (buf - (char *) s + 0x03);
			buf += 0x04;
		}
}
