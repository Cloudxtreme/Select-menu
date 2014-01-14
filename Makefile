#******************************************************************************#
#                                                                              #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/21 13:46:39 by adjivas           #+#    #+#              #
#    Updated: 2013/12/21 13:46:42 by adjivas          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME  = ft_select
FLAG  = -O0
FLAG += -Wall
FLAG += -Wextra
FLAG += -Werror
FLAG += -fstack-protector-all
FLAG += -Wshadow
FLAG += -Wunreachable-code
FLAG += -Wstack-protector
FLAG += -ggdb3
FLAG += -W
FLAG += -Wundef
FLAG += -fno-common
FLAG += -Wstrict-prototypes
FLAG += -Wmissing-prototypes
FLAG += -Wunknown-pragmas
FLAG += -Wdeclaration-after-statement
FLAG += -Wold-style-definition
FLAG += -Wmissing-field-initializers
FLAG += -Wfloat-equal
FLAG += -Wpointer-arith
FLAG += -Wnested-externs
FLAG += -Wstrict-overflow=5
FLAG += -fno-common
FLAG += -Wno-missing-field-initializers
FLAG += -Wswitch-default
FLAG += -Wswitch-enum
FLAG += -Wbad-function-cast
FLAG += -Wredundant-decls
FLAG += -fno-omit-frame-pointer
DIRC  = srcs
SRCC  = main.c
SRCC += ft_lst_add.c
SRCC += ft_lst_after.c
SRCC += ft_lst_del_n.c
SRCC += ft_lst_first.c
SRCC += ft_lst_free.c
SRCC += ft_lst_malloc.c
SRCC += ft_lst_put_back.c
SRCC += ft_lst_put_before.c
SRCC += ft_lst_put_n.c
SRCC += ft_mem_del.c
SRCC += ft_put_str_hr.c
SRCC += ft_str_len.c
SRCC += ft_tcsetattr_end.c
SRCC += ft_tcsetattr_start.c
SRCC += ft_tputs_putchar.c
SRCC += ft_lst_av.c
SRCC += ft_slt_malloc.c
SRCC += ft_slt_put.c
SRCC += ft_lst_put.c
SRCC += ft_slt_space.c
SRCC += ft_slt_esc.c
SRCC += ft_slt_delete.c
SRCC += ft_slt_underlining.c
SRCC += ft_lst_del_erase.c
SRCC += ft_slt_arrow_select.c
SRCC += ft_slt_right.c
SRCC += ft_slt_bottom.c
SRCC += ft_slt_top.c
SRCC += ft_slt_left.c
SRCC += ft_put_char.c
SRCC += ft_put_lst_hr.c
SRCC += ft_slt_option.c
SRCC += ft_signal_tstp.c
SRCC += ft_signal_cont.c
SRCC += ft_signal_size.c
SRCC += ft_signal_handler.c
SRCC += ft_signal_term.c
SRCC += ft_signal.c
SRCC += ft_put_slt.c
SRCC += ft_put_slt_len.c
SRCC += ft_put_slt_col.c
LSTC  = $(patsubst %,$(DIRC)/%,$(SRCC))
OBJO  = $(LSTC:.c=.o)

all: $(NAME)

$(NAME): $(OBJO)
	@llvm-gcc -ltermcap -o $@ $(LSTC) -I./includes

%.o: %.c
	@llvm-gcc $(FLAG) -Iincludes -c $^ -o $@

clean:
	@/bin/rm -rf $(OBJO)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

test: re clean
	clear
