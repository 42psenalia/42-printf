# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psenalia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 16:05:57 by psenalia          #+#    #+#              #
#    Updated: 2024/03/19 16:45:16 by psenalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------
#			Directories
#------------------------------------------------------------------------------

SRC		= formatchar.c formatstring.c formatpoint.c \
		  formatint.c formatunsint.c formathexint.c \
		  ft_printf.c

OBJ		= $(SRC:.c=.o)

#------------------------------------------------------------------------------
#			Variables
#------------------------------------------------------------------------------

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

#------------------------------------------------------------------------------
#			Targets
#------------------------------------------------------------------------------

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)
clean:
			$(RM) -r $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
