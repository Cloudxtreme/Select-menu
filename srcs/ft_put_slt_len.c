/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_slt_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 23:04:58 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 23:05:00 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_put_slt_len(t_list *list,
									   size_t i,
									   size_t *limit)
{
	t_select			*target;

	while (i-- && (*list).objet && (list = (*list).after))
		{
			target = (*((*list).before)).objet;
			if ((*target).len > (*limit))
				(*limit) = (*target).len;
		}
}
