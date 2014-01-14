/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:40:50 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 23:17:59 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_add(t_list *list, size_t *n, void *str)
{
	if (str && (*n)++)
		(void) ft_lst_after(ft_lst_malloc(), &(*list), str);
	else if (str)
		(void) ft_lst_first(&(*list), str);
}
