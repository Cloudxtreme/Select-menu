/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 18:13:17 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 18:13:18 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<curses.h>
#include				<term.h>

static void				ft_slt_put_align(size_t limit)
{
	while (limit--)
		(void) ft_put_char(SPACE);
	(void) ft_put_char(0x09);
}

void					ft_slt_put(t_select *select, size_t limit)
{
	if ((*select).underlining)
		(void) tputs(tgetstr("us", NULL), 0x01, ft_tputs_putchar);
	if ((*select).reverse)
		(void) tputs(tgetstr("mr", NULL), 0x01, ft_tputs_putchar);
	(void) ft_put_str_hr((*select).element, 0x00, 0x00);
	(void) tputs(tgetstr("me", NULL), 0x01, ft_tputs_putchar);
	(void) ft_slt_put_align((limit -= (*select).len));
}
