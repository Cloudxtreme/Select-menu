/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_erase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 20:50:30 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 20:51:21 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_del_erase(t_list *deb, t_list *target,
										 size_t n)
{
	if (n == 0x00)
		return (ft_lst_free(&(*deb), &n));
	if (deb == target)
		{
			(*deb).objet = (*((*deb).after)).objet;
			target = (*deb).after;
		}
	(*(*target).before).after = (*target).after;
	(*(*target).after).before = (*target).before;
	(void) ft_mem_del((void *) &(target));
}
