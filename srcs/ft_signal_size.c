/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 18:05:33 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 18:05:35 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<curses.h>
#include				<term.h>

void					ft_signal_size(void)
{
	t_term				*term;

	term = (t_term *) ft_signal_term(NULL);
	(*term).col = (size_t) tgetnum("co");
	(*term).row = (size_t) tgetnum("li");
}
