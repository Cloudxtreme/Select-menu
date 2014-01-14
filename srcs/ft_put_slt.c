/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_slt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 21:01:59 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 21:02:01 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

size_t					ft_put_slt(t_term *term,
								   t_list *list,
								   size_t i,
								   size_t column)
{
	size_t				count;
	size_t				limit;

	count = -1;
	limit = 0x01;
	(void) ft_put_slt_len(list, i, &limit);
	(void) ft_put_slt_col(i, (*term).row, &column);
	while (i-- && (*list).objet && (list = (*list).after))
		{
			if (count++ == (column) && !(count = 0x00))
				(void) ft_put_char(0x0a);
			(void) ft_slt_put((*((*list).before)).objet, limit);
		}
	(void) ft_put_char(0x0a);
	return (column);
}
