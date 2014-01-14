/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tputs_putchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 16:44:45 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/05 16:44:46 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdlib.h>
#include				<stdio.h>
#include				<unistd.h>

int						ft_tputs_putchar(int c)
{
	if (write(0x00, &c, 0x01) == EOF)
		(void) exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
