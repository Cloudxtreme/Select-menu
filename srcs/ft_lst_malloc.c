/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:37:04 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:37:06 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

void					*ft_lst_malloc(void)
{
	t_list				*new_list;

	if (!(new_list = (t_list *) malloc(sizeof(t_list))))
		(void) exit(EXIT_FAILURE);
	return ((new_list));
}
