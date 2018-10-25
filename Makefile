# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:09:15 by pmigeon           #+#    #+#              #
#    Updated: 2018/10/23 11:55:07 by pmigeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./*.c 
HEADER = ./
LIBNAME = libft.a
COMPILER = gcc
FLAGS = -Wall -Werror -Wextra -c
OFILE = ./*.o
NAME = libft.a

all: $(NAME)

$(NAME): 
	$(COMPILER) $(FLAGS) $(SOURCES) -I $(HEADER)
	ar rc $(LIBNAME) $(OFILE)
	ranlib $(LIBNAME)

clean:
	/bin/rm -f $(OFILE)

fclean: clean 
	/bin/rm -f $(LIBNAME)

re: fclean all
