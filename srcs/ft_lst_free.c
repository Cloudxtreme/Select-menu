/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:47:54 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:47:55 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_free(t_list *list, size_t *n)
{
	if (!(*n))
		return ;
	while (--(*n) && (list = (*list).before))
		(void) ft_mem_del((void *) &(*(*list).before).after);
	(*list).objet = NULL;
}
