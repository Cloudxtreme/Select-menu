/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_hr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:35:15 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:35:16 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<unistd.h>
#include				<stdlib.h>

void					ft_put_str_hr(const void *s,
									  const unsigned char hr,
									  int fd)
{
	if (s && !(write(fd, s, ft_str_len(s))))
		(void) exit(EXIT_FAILURE);
	if (hr && !(write(fd, &hr, 0x01)))
		(void) exit(EXIT_FAILURE);
}
