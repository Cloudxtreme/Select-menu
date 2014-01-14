/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 17:31:19 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 17:31:21 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<signal.h>
#include				<sys/ioctl.h>

void					ft_signal(t_term *term)
{
	(void) ft_signal_term(&(*term));

	(void) signal(SIGINT, ft_signal_handler);
	(void) signal(SIGTERM, ft_signal_handler);
	(void) signal(SIGCONT, ft_signal_handler);
	(void) signal(SIGTSTP, ft_signal_handler);
}
