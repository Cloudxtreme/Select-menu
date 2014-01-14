/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_after.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:38:41 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 23:26:02 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_after(t_list *new_list, t_list *pre, void *str)
{
	(*new_list).objet = str;
	(*new_list).after = pre;
	(*new_list).before = (*pre).before;

	(*((*pre).before)).after = new_list;
	(*pre).before = new_list;
}
