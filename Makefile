# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 00:31:05 by omacieir          #+#    #+#              #
#    Updated: 2022/11/16 01:05:32 by omacieir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB			=	libft

SRCS		=	ft_atoi			\
				ft_bzero		\
				ft_calloc		\
				ft_isalnum		\
				ft_isalpha		\
				ft_isascii		\
				ft_isdigit		\
				ft_isprint		\
				ft_itoa			\
				ft_memchr		\
				ft_memcmp		\
				ft_memcpy		\
				ft_memmove		\
				ft_memset		\
				ft_putchar_fd	\
				ft_putstr_fd	\
				ft_split		\
				ft_strchr		\
				ft_strdup		\
				ft_striteri		\
				ft_strjoin		\
				ft_strlcat		\
				ft_strlcpy		\
				ft_strlen		\
				ft_strmapi		\
				ft_strncmp		\
				ft_strnstr		\
				ft_strrchr		\
				ft_strtrim		\
				ft_substr		\
				ft_tolower		\
				ft_toupper		\

CC			=	gcc

RM			=	rm -f

WFLAGS		=	-Wall -Wextra -Werror

OUT			=	$(LIB).a

C_FILES		=	$(SRCS:%=%.c)

O_FILES		=	$(SRCS:%=%.o)

NAME		=	$(OUT)

$(NAME):
	$(CC) $(WFLAGS) -c $(C_FILES) -I./
	ar -rc $(OUT) $(O_FILES)

all: $(NAME)

clean:
	$(RM) $(NAME)
	$(RM) $(O_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re