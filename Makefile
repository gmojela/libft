# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmojela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 15:52:18 by gmojela           #+#    #+#              #
#    Updated: 2016/05/15 16:13:38 by gmojela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putnbr.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcpy.c ft_strncpy.c \
	  ft_memset.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c \
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strdup.c ft_atoi.c ft_bzero.c \
	  ft_strcat.c ft_memcpy.c ft_memmove.c ft_strstr.c ft_strrchr.c \
	  ft_strnew.c ft_strncpy.c ft_strchr.c ft_strcat.c ft_putchar_fd.c\
	  ft_memcmp.c ft_memchr.c ft_memccpy.c ft_strcpy.c ft_strrchr.c ft_strcmp.c \
	  ft_strlcat.c ft_strncat.c ft_strncmp.c ft_strnstr.c ft_memalloc.c \
	  ft_memdel.c ft_strdel.c ft_strclr.c

OBJ = ft_putnbr.o ft_putchar.o ft_putstr.o ft_strlen.o ft_strcpy.o ft_strncpy.o \
	  ft_memset.o ft_tolower.o ft_toupper.o ft_isprint.o ft_isascii.o \
	  ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_strdup.o ft_atoi.o ft_bzero.o \
	  ft_strcat.o ft_memcpy.o ft_memmove.o ft_strstr.o ft_strrchr.o ft_strnew.o \
	  ft_strncpy.o ft_strchr.o ft_strcat.o ft_putchar_fd.o ft_memcmp.o\
	  ft_memchr.o ft_memccpy.o ft_strcpy.o ft_strrchr.o ft_strcmp.o \
	  ft_strlcat.o ft_strncat.o ft_strncmp.o ft_strnstr.o ft_memalloc.o\
	  ft_memdel.o ft_strdel.o ft_strclr.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	   

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
