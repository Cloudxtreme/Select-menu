/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 17:30:39 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 17:30:40 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<signal.h>

void					ft_signal_handler(int sig)
{
	if (sig == SIGTSTP)
		(void) ft_signal_tstp();
	else if (sig == SIGCONT)
		(void) ft_signal_cont();
	else if (sig == SIGWINCH)
		(void) ft_signal_size();
}
