/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_option.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 23:23:41 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 23:23:42 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_slt_option(t_term *term, t_list *list, size_t *n)
{
	size_t				ct;
	static const t_func	func[] =
		{
			{&ft_slt_esc},
			{&ft_slt_space},
			{&ft_slt_delete},
			{&ft_slt_top},
			{&ft_slt_bottom},
			{&ft_slt_right},
			{&ft_slt_left},
			{0x00}
		};

	ct = -1;
	while ((func[++ct].fct))
		{
			if (!func[ct].fct(&*term, &*list, &(*n)))
				break ;
		}
	*(0x01 + (*term).read) = 0x00;
	*(0x02 + (*term).read) = 0x00;
}
