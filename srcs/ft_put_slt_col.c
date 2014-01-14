/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_slt_col.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 23:09:33 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 23:09:35 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"

void					ft_put_slt_col(size_t element,
									   size_t with,
									   size_t *column)
{
	while (element > with && (element -= with))
		(*column)++;
}
