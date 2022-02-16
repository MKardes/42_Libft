# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 19:10:24 by mkardes           #+#    #+#              #
#    Updated: 2022/02/16 01:03:03 by mkardes          ###   ########.fr        #
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
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

GREEN = \033[0;92m
YELLOW = \033[0;93m
RED = \033[0;91m

BONUS_OBJS = $(BONUS:.c=.o)

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;93m"
	@ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)\nProgram checking...\n\n\n$(YELLOW)******************************\n*********** PART 1 ***********\n******************************\n$(RED)"
	@$(CC) test_part1.c $(NAME)
	@./a.out
	@echo "\n\n$(YELLOW)******************************\n*********** PART 2 ***********\n******************************\n$(RED)"
	@$(CC) test_part2.c $(NAME)
	@./a.out
	@echo "\n\n$(YELLOW)******************************\n********* BONUS PART *********\n******************************\n$(RED)"
	@$(CC) $(NAME) test_bonuspart.c
	@./a.out
	@echo "\n"

clean:
	@echo "$(GREEN)Loading..."
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: clean re fclean all
