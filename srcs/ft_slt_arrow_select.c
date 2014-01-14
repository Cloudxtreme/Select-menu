/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_arrow_select.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 22:31:44 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 22:31:46 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

size_t					ft_slt_arrow_select(m_bool bool, t_select *select)
{
	if (bool || (*select).underlining)
		(*select).underlining = !(*select).underlining;
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
