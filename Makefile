# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 16:17:53 by hsirenko          #+#    #+#              #
#    Updated: 2023/06/29 19:54:40 by hsirenko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c 

OBJS	:= $(SRCS:%.c=%.o)
NAME = push_swap

CC = cc 
RM = rm -f 

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

%.o: %.c 
		$(CC) $(CFLAGS) -Ilibft -Iprintf -c $< -o $@

${NAME}:	${OBJS}
			@make -C libft
			@make -C printf
			$(CC) $(CFLAGS) $^ -Llibft -Lprintf -lftprintf -o $(NAME)

libft:
			make -C libft

printf:
			make -C printf

clean:
			make clean -C libft
			make clean -C printf
			${RM} ${OBJS}

fclean: clean
			make fclean -C libft
			make fclean -C printf
			${RM} $(NAME)

re: 		fclean all

.PHONY:		libft printf
