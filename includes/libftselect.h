/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftselect.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:14:19 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/12 23:25:45 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef					LIBFTSELECT_H
# define				LIBFTSELECT_H

# define				TERM											  "TERM"

# define				TOP													0x41
# define				LEFT												0x44
# define				BOTTOM												0x42
# define				RIGHT												0x43
# define				BACKSPACE											0x7f
# define				DELETE												0x7e
# define				ESC													0x1b
# define				SPACE												0x20
# define				RETURN												0x0a

# include				<string.h>
# include				<termios.h>

typedef enum e_bool		m_bool;

typedef struct s_func	t_func;
typedef struct s_term	t_term;
typedef struct s_select	t_select;
typedef struct s_list	t_list;

enum					e_bool
{
	true = (0x01 == 0x01),
	false = (0x01 == 0x00)
};

struct					s_func
{
	size_t				(*fct)(t_term *, t_list *, size_t *);
};

struct					s_term
{
	struct termios		termios;
	char				buff[0x800];
	char				read[0x04];
	size_t				column;
	size_t				col;
	size_t				row;
};

struct					s_select
{
	void				*element;
	size_t				len;
	m_bool				underlining;
	m_bool				reverse;
};

struct					s_list
{
	void				*objet;
	t_list				*after;
	t_list				*before;
};

size_t					ft_str_len(const void *s);
void					ft_mem_del(void **ap);
void					ft_tcsetattr_end(struct termios *term,
										 size_t icanon,
										 size_t echo);
void					ft_tcsetattr_start(struct termios *term,
										   size_t icanon,
										   size_t echo);
int						ft_tputs_putchar(int c);
void					ft_put_char(char c);
void					ft_put_str_hr(const void *s,
									  const unsigned char hr,
									  int fd);
size_t					ft_put_slt(t_term *term, t_list *list,
								   size_t i, size_t	column);
void					ft_put_lst_hr(t_list *list,
									  const unsigned char hr,
									  size_t n);
void					ft_put_slt_col(size_t element,
									   size_t with,
									   size_t *column);
void					ft_put_slt_len(t_list *list,
									   size_t i,
									   size_t *limit);

void					ft_signal_tstp(void);
void					ft_signal_cont(void);
void					ft_signal_size(void);
void					ft_signal_handler(int sig);
void					*ft_signal_term(t_term *term);
void					ft_signal(t_term *term);

void					ft_slt_option(t_term *term, t_list *list,
									  size_t *n);
size_t					ft_slt_left(t_term *term, t_list *list,
									size_t *n);
size_t					ft_slt_top(t_term *term, t_list *list,
								   size_t *n);
size_t					ft_slt_right(t_term *term, t_list *list,
									 size_t *n);
size_t					ft_slt_bottom(t_term *term, t_list *list,
									  size_t *n);
size_t					ft_slt_arrow_select(m_bool bool,
											t_select *select);
size_t					ft_slt_esc(t_term *term,
								   t_list *list,
								   size_t *n);
size_t					ft_slt_space(t_term *term,
									 t_list *list,
									 size_t *n);
void					ft_slt_put(t_select *select, size_t limit);
void					*ft_slt_malloc(size_t n, void *str);
size_t					ft_slt_delete(t_term *term, t_list *target,
									  size_t *n);
void					ft_slt_underlining(t_select *select);

void					ft_lst_put(t_list *list, size_t i);
void					ft_lst_av(t_list *list, size_t n,
								  const char ***av, int *ac);
void					*ft_lst_malloc(void);
void 					ft_lst_after(t_list *new_list,
									 t_list *pre,
									 void *str);
void					ft_lst_first(t_list *pre,
									 void *str);
void					ft_lst_add(t_list *list, size_t *n,
								   void *str);
void					ft_lst_put_n(const t_list *list, size_t n,
									 short int i,
									 const unsigned char hr);
void					ft_lst_put_before(const t_list *list, size_t i,
										  const unsigned char hr);
void					ft_lst_put_back(const t_list *list, size_t i,
										const unsigned char hr);
void					ft_lst_del_n(t_list *deb, t_list *target,
									 size_t *n, short int i);

void					ft_lst_del_erase(t_list *deb, t_list *target,
										 size_t n);
void					ft_lst_free(t_list *list, size_t *n);

#endif					/* !LIBFTSELECT_H */
