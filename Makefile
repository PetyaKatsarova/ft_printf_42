# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pkatsaro <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/08 16:00:53 by pkatsaro      #+#    #+#                  #
#    Updated: 2022/11/23 18:26:26 by pkatsaro      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =	 libftprintf.a
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
RM = rm -f
LIB = ar rcs

SOURCES = ft_printf.c \
		ft_print_utils.c \
		ft_print_num.c \
		
OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	$(CC) -c $< -o $@ -I $(LIBFT_PATH)
# add $(CFLAGS) after CC

all:	$(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME):	$(OBJECTS)
			cp $(LIBFT) $(NAME)
			$(LIB) $(NAME) $(OBJECTS)

clean:
		make clean -C $(LIBFT_PATH)
		$(RM) $(OBJECTS)

fclean:	clean
		make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft

test: all
#	$(CC) $(CFLAGS) main.c -L. -lftprintf && ./a.out
	$(CC)  main.c $(NAME) && ./a.out
# add $(CFLAGS) after CC