# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 09:31:00 by jlima             #+#    #+#              #
#    Updated: 2022/05/17 14:36:23 by jlima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= get_next_line.a

SRC 		= get_next_line.c get_next_line_utils.c

OBJS 		= $(patsubst %.c,%.o,$(SRC))

BONUS_S		= get_next_line_bonus.c get_next_line_utils_bonus.c

BONUS_O 	= $(patsubst %.c,%.o,$(BONUS_S))

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror -I.

all: 		$(NAME)

$(NAME) : 	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

bonus:		$(BONUS_O)
			ar -rcs $(NAME) $(BONUS_O)

clean:
			rm -f $(OBJS) $(BONUS_O)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re bonus
