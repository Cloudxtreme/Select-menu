/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:48:26 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:48:28 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_del_n(t_list *deb, t_list *target,
									 size_t *n, short int i)
{
	if ((*n) != 0x00)
		(*n)--;
	if (i > 0x00)
		while (i-- && (*target).objet && (target = (*target).after));
	else if (i < 0x00)
		while (i++ && (*target).objet && (target = (*target).before));
	(void) ft_lst_del_erase(&(*deb), &(*target), (*n));
}
