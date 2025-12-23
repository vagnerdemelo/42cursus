# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 16:52:59 by vade-mel          #+#    #+#              #
#    Updated: 2025/12/23 16:53:02 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= pipex
NAME_B	:= pipex_bonus
CFLAGS	:= -Wextra -Wall -Werror -g3
LIBFT	:= ./lib/libft

HEADERS	:= -I ./include \
			-I ${LIBFT}/include

LIBS	:= ${LIBFT}/libft.a

SRCS	:= src/exec.c src/main.c src/path.c src/utils.c
OBJS	:= ${SRCS:src/%.c=obj/%.o}

SRCS_B	:= src_bonus/exec_bonus.c src_bonus/here_doc_bonus.c \
			src_bonus/main_bonus.c src_bonus/path_bonus.c \
			src_bonus/utils_bonus.c src_bonus/get_next_line.c \
			src_bonus/get_next_line_utils_bonus.c
OBJS_B	:= ${SRCS_B:src_bonus/%.c=obj/%.o}

all: ${NAME}
bonus: ${NAME_B}

${NAME}: libft ${OBJS}
	@${CC} ${OBJS} ${LIBS} ${HEADERS} -o ${NAME}

${NAME_B}: libft ${OBJS_B}
	@${CC} ${OBJS_B} ${LIBS} ${HEADERS} -o ${NAME_B}

obj/%.o: src/%.c
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -o $@ -c $< ${HEADERS}
	@printf "Compiling: ${notdir $<}\n"

obj/%.o: src_bonus/%.c
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -o $@ -c $< ${HEADERS}
	@printf "Compiling: ${notdir $<}\n"

libft:
	@make -C ${LIBFT} all

clean:
	@rm -rf obj
	@make -C ${LIBFT} clean

fclean: clean
	@rm -f ${NAME}
	@rm -f ${NAME_B}
	@make -C ${LIBFT} clean

re: fclean all
re_bonus: fclean bonus

.PHONY: all clean fclean re re_bonus libft
