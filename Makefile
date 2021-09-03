# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 20:54:10 by julrodri          #+#    #+#              #
#    Updated: 2021/09/02 22:42:55 by julrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = ft_isalpha.c \
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
ft_strnstr.c \
ft_atoi.c \
ft_strdup.c \
ft_split.c \
ft_substr.c

OBJ = ${SRC:%.c=%.o} 

all: ${NAME}

${NAME}:${OBJ}
	ar -crs ${NAME} ${OBJ}

${OBJ}:
	gcc ${FLAGS} -c ${SRC}

clean:
	rm -f ${OBJ}

fclean: 
	rm -f ${NAME}

re: clean all

# $(NAME), all, clean, fclean and
# re.