/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 19:18:35 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 19:18:36 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

static size_t			ft_slt_space_select(t_select *select)
{
	if ((*select).underlining)
		(*select).reverse = !(*select).reverse;
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

size_t					ft_slt_space(t_term *term,
									 t_list *list,
									 size_t *n)
{
	size_t				i;

	if ((*((*term).read) != SPACE)
		 || (*(0x01 + (*term).read))
		 || (*(0x02 + (*term).read)))
		return (EXIT_FAILURE);
	i = (*n);
	while (i-- && (list = (*list).before))
		{
			if (!ft_slt_space_select((*list).objet))
				break ;
		}
	return (EXIT_SUCCESS);
}
