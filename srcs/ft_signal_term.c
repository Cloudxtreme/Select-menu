/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_term.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 17:30:54 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 17:30:58 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					*ft_signal_term(t_term *term)
{
	static t_term		*target;

	if (term && (target = term))
		(void) ft_signal_size();
	return (target);
}
