/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_put_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:45:15 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:45:16 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_lst_put_back(const t_list *list, size_t i,
										const unsigned char hr)
{
	(void) ft_put_str_hr((*list).objet, hr, 0x00);
	while (--i && (*list).objet && (list = (*list).after))
		(void) ft_put_str_hr((*list).objet, hr, 0x00);
}
