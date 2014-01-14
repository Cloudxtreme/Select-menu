/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_put_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:41:16 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:41:17 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_put_n(const t_list *list,
									 size_t n,
									 short int i,
									 const unsigned char hr)
{
	if (i > 0x00)
		while (i-- && (list = (*list).after));
	else if (i < 0x00)
		while (i++ && (list = (*list).before));
	if (n)
		(void) ft_put_str_hr((*list).objet, hr, 0x00);
}
