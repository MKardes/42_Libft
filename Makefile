# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 19:10:24 by mkardes           #+#    #+#              #
#    Updated: 2022/02/03 20:17:46 by mkardes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c

GREEN = \033[0;92m

OBJS = $(SRCS:.c=.o)

LIB = libft.h

CFLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

all: $(NAME) $(LIB)
	@echo "\033[0;91m\nProgram checking..."
	@$(CC) main.c $(NAME)
	@./a.out

$(NAME): $(OBJS)
	@echo "\033[0;93m"
	ar rc $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -include $(LIB) -o $@

clean:
	@echo "$(GREEN)Loading..."
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean re fclean all