# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 20:54:10 by julrodri          #+#    #+#              #
#    Updated: 2021/09/07 23:44:23 by julrodri         ###   ########.fr        #
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
ft_memcmp.c \
ft_memchr.c \
ft_strnstr.c \
ft_atoi.c \
ft_substr.c \
ft_calloc.c \
ft_strdup.c \
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

OBJ = ${SRC:%.c=%.o} 

all: ${NAME}

${NAME}:${OBJ}
	ar -crs ${NAME} ${OBJ}

${OBJ}:
	clang ${FLAGS} -c ${SRC}

clean:
	rm -f ${OBJ}

fclean: 
	rm -f ${NAME}

re: clean all

so:
	clang -nostartfiles -fPIC $(FLAGS) $(SRC)
	clang -nostartfiles -shared -o libft.so $(OBJ)

# $(NAME), all, clean, fclean and
# re.