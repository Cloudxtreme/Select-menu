/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 20:19:45 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 20:19:46 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

static size_t			ft_slt_delete_select(t_select *select)
{
	if ((*select).underlining)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

size_t					ft_slt_delete(t_term *term,
									 t_list *target,
									 size_t *n)
{
	t_list				*deb;
	size_t				i;

	if (!(*((*term).read) == DELETE
		 || *((*term).read) == BACKSPACE)
		 ||  (*(0x01 + (*term).read))
		 ||  (*(0x02 + (*term).read)))
		return (EXIT_FAILURE);
	deb = target;
	i = (*n);
	if (--(*n) <= 0x00)
		(void) exit(EXIT_SUCCESS);
	while (i-- && (target = (*target).before))
		{
			if (!ft_slt_delete_select((*target).objet))
				break ;
		}
	(void) ft_slt_underlining((*(*target).after).objet);
	(void) ft_lst_del_erase(&(*deb), &(*target), (*n));
	return (EXIT_SUCCESS);
}
