/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 22:54:09 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 22:54:10 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

size_t					ft_slt_top(t_term *term, t_list *list, size_t *n)
{
	size_t				i;

	if ((*((*term).read) != 0x1b)
		 || (*(0x01 + (*term).read) != 0x5b)
		 || (*(0x02 + (*term).read)) != TOP)
		return (EXIT_FAILURE);
	i = (*n);
	while (i-- && (list = (*list).before))
		{
			if (!ft_slt_arrow_select(false, (*list).objet))
				break ;
		}
	i = (*term).column;
	while (i--)
		(list = (*list).before);
	(void) ft_slt_arrow_select(true, (*(*list).before).objet);
	return (EXIT_SUCCESS);
}
