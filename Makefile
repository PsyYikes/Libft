# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 14:33:19 by fgarcia           #+#    #+#              #
#    Updated: 2023/10/18 17:36:55 by fgarcia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memcpy ft_memmove ft_memset ft_strlcat ft_strlcpy ft_strlen ft_tolower ft_toupper ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi

INC_FILES = libft.h

SRC = $(addsuffix .c,$(SRCS))
OBJ = $(addsuffix .o,$(SRCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJ)
    ar -rcs $(NAME) $(OBJ) $(INC_FILES)

%.o: %.c
    $(CC) -c -o $@ $< $(CCFLAGS)

clean :
    rm -rf $(OBJ)

fclean : clean
    rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean