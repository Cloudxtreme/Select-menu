/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_right.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 22:41:42 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 22:41:44 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

size_t					ft_slt_right(t_term *term, t_list *list, size_t *n)
{
	size_t				i;

	if ((*((*term).read) != 0x1b)
		 || (*(0x01 + (*term).read) != 0x5b)
		 || (*(0x02 + (*term).read)) != RIGHT)
		return (EXIT_FAILURE);
	i = (*n);
	while (i-- && (list = (*list).before))
		{
			if (!ft_slt_arrow_select(false, (*list).objet))
				break ;
		}
	(void) ft_slt_arrow_select(true, (*(*list).after).objet);
	return (EXIT_SUCCESS);
}
