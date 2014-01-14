/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_esc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 19:31:21 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 19:31:22 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

size_t					ft_slt_esc(t_term *term, t_list *list, size_t *n)
{
	if (((*((*term).read) != ESC)
		|| (*(0x01 + (*term).read))
		|| (*(0x02 + (*term).read)))
		&& (*n))
		return (EXIT_FAILURE);
	(void) ft_lst_free(&(*list), &*n);
	(void) exit(EXIT_SUCCESS);
}
