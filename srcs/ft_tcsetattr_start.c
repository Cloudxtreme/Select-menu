/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tcsetattr_start.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 16:44:34 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/05 16:44:38 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>
#include				<stdio.h>
#include				<unistd.h>
#include				<term.h>

void					ft_tcsetattr_start(struct termios *term,
										   size_t icanon,
										   size_t echo)
{
	(*term).c_lflag &= icanon;
	(*term).c_lflag &= echo;
	if (tcsetattr(0x00, 0x00, &(*term)) == EOF)
		(void) exit(EXIT_FAILURE);
	(void) tputs(tgetstr("vi", NULL), 0x01, ft_tputs_putchar);
}
