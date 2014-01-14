/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slt_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 17:44:56 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 17:44:58 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

void					*ft_slt_malloc(size_t n, void *str)
{
	t_select			*select;

	if (!(select = (t_select *) malloc(sizeof(t_select))))
		(void) exit(EXIT_SUCCESS);
	else if (n)
		(*select).underlining = false;
	else
		(*select).underlining = true;
	(*select).element = str;
	(*select).len = ft_str_len(str);
	(*select).reverse = false;
	return (select);
}
