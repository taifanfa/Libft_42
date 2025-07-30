# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 11:10:12 by tmorais-          #+#    #+#              #
#    Updated: 2025/07/26 14:45:55 by tmorais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strncmp.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_strnstr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_split.c \

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \


OBJS = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
