/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 16:08:28 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/06 16:12:38 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<unistd.h>
#include				<stdlib.h>
#include				<stdio.h>

void					ft_put_char(char c)
{
	if (write(0x01, &c, 0x01) == EOF)
		(void) exit(EXIT_FAILURE);
}
