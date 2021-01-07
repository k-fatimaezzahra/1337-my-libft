# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/29 00:13:41 by fkarouac          #+#    #+#              #
#    Updated: 2020/12/28 12:08:49 by fkarouac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c\
		ft_isalpha.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putnbr.c\
		ft_putstr_fd.c\
		ft_strclr.c\
		ft_strdel.c\
		ft_striter.c\
		ft_strlcat.c\
		ft_strmapi.c\
		ft_strncpy.c\
		ft_strnjoin.c\
		ft_strsplit.c\
		ft_strtrim.c\
		ft_bzero.c\
		ft_isascii.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memdel.c\
		ft_newnode.c\
		ft_putendl.c\
		ft_putnbr_fd.c\
		ft_strcat.c\
		ft_strcmp.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strlen.c\
		ft_strncat.c\
		ft_strnequ.c\
		ft_strnstr.c\
		ft_strstr.c\
		ft_tolower.c\
		ft_addnode.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_memalloc.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_putchar.c\
		ft_putendl_fd.c\
		ft_putstr.c\
		ft_strchr.c\
		ft_strcpy.c\
		ft_strequ.c\
		ft_strjoin.c\
		ft_strmap.c\
		ft_strncmp.c\
		ft_strnew.c\
		ft_strrchr.c\
		ft_strsub.c\
		ft_toupper.c\
		ft_creat_path.c\
		ft_strdoubledup.c\
		ft_strswap.c\
		ft_doublestrlen.c\
		ft_sortdoublechar.c\
		ft_doublefree.c\
		ft_return_path.c\
		get_next_line.c

SRCDIR = src/

SRCS = $(addprefix $(SRCDIR), $(SRC))

HEADERS = inc/libft.h

OBJDIR = objs/

OBJS = $(addprefix $(OBJDIR), $(SRC:.c=.o))

INC = -I inc/

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all : $(NAME)

$(OBJS): $(OBJDIR)%.o:$(SRCDIR)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $(INC) $< -o $@

$(OBJDIR):
	@mkdir -p $@

$(NAME) : $(OBJDIR) $(OBJS) 
	ar rc  $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean fclean re all
