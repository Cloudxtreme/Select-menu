/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 11:19:43 by frale-co          #+#    #+#             */
/*   Updated: 2014/01/05 11:56:15 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"libftselect.h"
#include				<stdio.h>
#include				<termcap.h>
#include				<stdlib.h>
#include				<unistd.h>

int						main(int ac, const char **av)
{
	t_term				term;
	t_list				list;
	size_t				n;

	if (!(n = (size_t) (--ac)) || (tgetent(term.buff, getenv(TERM)) == EOF))
		(void) exit(EXIT_FAILURE);
	if (tcgetattr(0x00, &term.termios) == EOF)
		(void) exit(EXIT_FAILURE);
	(void) ft_signal(&term);
	(void) ft_lst_av(&list, 0x00, &av, &ac);
	(void) ft_tcsetattr_start(&term.termios, ~ICANON, ~ECHO);
	while (*term.read != RETURN)
		{
			(void) tputs(tgetstr("cl", NULL), 0x01, ft_tputs_putchar);
			(void) ft_slt_option(&term, &list, &n);
			term.column = ft_put_slt(&term, &list, n, 0x00);
			if (read(0x00, term.read, 0x03) == EOF)
				(void) exit(EXIT_FAILURE);
		}
	(void) tputs(tgetstr("cl", NULL), 0x01, ft_tputs_putchar);
	(void) ft_tcsetattr_end(&term.termios, ICANON, ECHO);
	(void) ft_put_lst_hr(&list, SPACE, n);
	(void) ft_lst_free(&list, &n);
	return (EXIT_SUCCESS);
}
