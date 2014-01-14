/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 18:13:07 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 18:13:10 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_put(t_list *list, size_t i)
{
	while (i-- && (*list).objet && (list = (*list).after))
		(void) ft_slt_put((*((*list).before)).objet, 0x00);
}
