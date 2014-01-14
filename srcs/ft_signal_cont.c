/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_cont.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 17:30:16 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 17:30:17 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<signal.h>
#include				<sys/ioctl.h>

void					ft_signal_cont(void)
{
	t_term				*term;

	term = (t_term *) ft_signal_term(NULL);
	(void) signal(SIGTSTP, ft_signal_handler);
}
