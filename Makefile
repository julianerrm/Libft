# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 20:54:10 by julrodri          #+#    #+#              #
#    Updated: 2021/08/25 23:16:47 by julrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
FLAGS = -Wall -Werror -Wextra
OBJS = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c


all:
	gcc $(FLAGS) -c $(OBJS)
	ar -rcs $(LIB) $(OBJS)


clean:
	rm -rf $(OBJS)

fclean: 
	rm -rf $(LIB) $(OBJS)

re: fclean all

# $(NAME), all, clean, fclean and
# re.