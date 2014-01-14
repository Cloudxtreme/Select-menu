/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_tstp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 17:29:37 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 17:29:38 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<signal.h>
#include				<sys/ioctl.h>

void					ft_signal_tstp(void)
{
	t_term				*term;
	char				cp[0x02];

	term = ft_signal_term(NULL);
	cp[0x00] = (term->termios).c_cc[VSUSP];
	cp[0x01] = 0x00;
	(void) signal(SIGTSTP, SIG_DFL);
	(void) ioctl(0x00, TIOCSTI, cp);
}
