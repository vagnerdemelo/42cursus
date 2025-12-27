# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 17:06:10 by vade-mel          #+#    #+#              #
#    Updated: 2025/12/27 19:34:33 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= push_swap
CFLAGS		:= -Wextra -Wall -Werror -g3

LIBFT_DIR	:= lib/libft
LIBFT		:= ${LIBFT_DIR}/libft.a
LIBS		:= ${LIBFT}

HEADERS		:= -I include \
				-I ${LIBFT_DIR}/include

SRCS		:= src/stack_moves/rev_rotate.c \
				src/stack_moves/swap.c \
				src/stack_moves/push.c \
				src/stack_moves/rotate.c \
				src/main.c \
				src/sorting_algorithm/position.c \
				src/sorting_algorithm/cost.c \
				src/sorting_algorithm/sort.c \
				src/sorting_algorithm/move.c \
				src/utils/utils_list.c \
				src/utils/make_stack.c \
				src/utils/utils.c \
				src/linked_list/ft_lstnew.c \
				src/linked_list/create_node.c \
				src/linked_list/lst_get_max_value.c \
				src/linked_list/ft_lstadd_back.c \
				src/linked_list/ft_lstdelone.c \
				src/linked_list/ft_lstadd_front.c \
				src/linked_list/lst_get_min_value.c \
				src/linked_list/lst_get_index.c \
				src/linked_list/ft_lstclear.c \
				src/linked_list/ft_lstlast.c \
				src/linked_list/ft_lstsize.c \
				src/linked_list/lst_get_node.c \
				src/linked_list/lst_contains.c
OBJS		:= ${SRCS:src/%.c=obj/%.o}

all: ${NAME}

${NAME}: ${LIBFT} ${OBJS}
	@${CC} ${OBJS} ${LIBS} ${HEADERS} -o ${NAME}

${NAME_BONUS}: ${LIBFT} ${OBJS_BONUS}
	@${CC} ${OBJS_BONUS} ${LIBS} ${HEADERS} -o ${NAME_BONUS}

obj/%.o: src/%.c
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -o $@ -c $< ${HEADERS}
	@printf "Compiling: ${notdir $<}\n"

obj_bonus/%.o: src_bonus/%.c
	@mkdir -p ${dir $@}
	@${CC} ${CFLAGS} -o $@ -c $< ${HEADERS}
	@printf "Compiling: ${notdir $<}\n"

${LIBFT}:
	@make -C ${LIBFT_DIR} all

clean:
	@rm -rf obj
	@rm -rf obj_bonus
	@make -C ${LIBFT_DIR} clean

fclean: clean
	@rm -f ${NAME}
	@rm -f ${NAME_BONUS}
	@make -C ${LIBFT_DIR} fclean

re: fclean all

start: all
	@if [ -z "$(N)" ]; then \
		echo "Usage: make start N=<number>"; \
		exit 1; \
	fi
	@./$(NAME) $$(shuf -i 1-$(N) -n $(N))

test: all
	@if [ -z "$(N)" ]; then \
		echo "Usage: make test N=<number>"; \
		exit 1; \
	fi
	@ARG=$$(shuf -i 1-$(N) -n $(N) | tr '\n' ' '); \
	echo "Testing with $(N) numbers: $$ARG"; \
	RESULT=$$(./$(NAME) $$ARG | ./checker_linux $$ARG); \
	MOVES=$$(./$(NAME) $$ARG | wc -l); \
	echo "Result: $$RESULT"; \
	echo "Moves: $$MOVES"


.PHONY: all clean fclean re re_bonus libft
