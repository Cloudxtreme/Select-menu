/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_av.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 17:45:08 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/10 17:45:10 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>

void					ft_lst_av(t_list *list, size_t n,
								  const char ***av, int *ac)
{
	while (n < (size_t) *ac)
		{
			(void) ft_lst_add(&(*list),
							  &n,
							  ft_slt_malloc(n, (void *) (*++*av))
							  );
		}
}
