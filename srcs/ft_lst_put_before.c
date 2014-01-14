/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_put_before.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:44:44 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:44:45 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_put_before(const t_list *list, size_t i,
										  const unsigned char hr)
{
	while (i-- && (list = (*list).before))
		(void) ft_put_str_hr((*list).objet, hr, 0x00);
}
