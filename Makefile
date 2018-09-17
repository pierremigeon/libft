# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:09:15 by pmigeon           #+#    #+#              #
#    Updated: 2018/09/13 14:26:31 by pmigeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =  ./ft_memset.c ./ft_strlen.c ./ft_strdup.c ./ft_strcpy.c ./ft_strncpy.c ./ft_strchr.c ./ft_strcmp.c ./ft_isdigit.c ./ft_toupper.c ./ft_tolower.c
HEADER = ./
LIBNAME = libft.a
COMPILER = gcc
FLAGS = -Wall -Werror -Wextra -c
OFILE = ft_memset.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strchr.o ft_strcmp.o ft_isdigit.o ft_toupper.o ft_tolower.o
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
