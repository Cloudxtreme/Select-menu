/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lst_hr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 23:18:35 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 23:18:36 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

static void				ft_put_lst_hr_slt(t_select *select,
										  const unsigned char hr)
{
	if ((*select).reverse)
		(void) ft_put_str_hr((*select).element, hr, 0x01);
}

void					ft_put_lst_hr(t_list *list,
									  const unsigned char hr,
									  size_t n)
{
	(void) ft_put_lst_hr_slt((*list).objet, hr);
	while (--n && (*list).objet && (list = (*list).after))
		(void) ft_put_lst_hr_slt((*list).objet, hr);
	(void) ft_put_char(RETURN);
}
