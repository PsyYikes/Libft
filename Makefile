# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 14:33:19 by fgarcia           #+#    #+#              #
#    Updated: 2023/11/14 22:14:11 by fgarcia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		\
	ft_bzero	\
	ft_isalnum	\
	ft_isalpha	\
	ft_isascii	\
	ft_isdigit	\
	ft_isprint	\
	ft_memcpy	\
	ft_memmove	\
	ft_memset	\
	ft_strlcat	\
	ft_strlcpy	\
	ft_strlen	\
	ft_tolower	\
	ft_toupper	\
	ft_strchr	\
	ft_strrchr	\
	ft_strncmp	\
	ft_memchr	\
	ft_memcmp	\
	ft_strnstr	\
	ft_atoi		\
	ft_strdup	\
	ft_calloc	\
	ft_strjoin	\
	ft_substr	\
	ft_strtrim	\
	ft_itoa		\
	ft_putchar_fd	\
	ft_putstr_fd	\
	ft_split	\
	ft_putendl_fd	\
	ft_striteri	\
	ft_putnbr_fd	\
	ft_strmapi	\
	ft_lstnew	\

INC_FILES = libft.h

SRC = $(addsuffix .c,$(SRCS))
OBJ = $(addsuffix .o,$(SRCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJ)
	make -C libft bonus
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c -o $@ $< $(CCFLAGS)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean