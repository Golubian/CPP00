# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 16:20:06 by gachalif          #+#    #+#              #
#    Updated: 2024/06/07 16:20:06 by gachalif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS =	phonebook.cpp \
		contact.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

debug:	CPPFLAGS += -g
debug:	all

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re debug