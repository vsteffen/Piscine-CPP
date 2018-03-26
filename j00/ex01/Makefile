# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 17:09:30 by vsteffen          #+#    #+#              #
#    Updated: 2018/03/26 18:47:41 by vsteffen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -g

ROOT  	=	.
OPATH 	=	$(ROOT)/
CPATH 	=	$(ROOT)/

SRC =	phonebook.cpp \
		Contact.class.cpp

OBJ_NAME = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OPATH),$(OBJ_NAME))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building $@"
	@clang++ $(CFLAGS) $(OBJ) -o $@

$(OPATH)/%.o: $(CPATH)/%.cpp
	@clang++ $(CFLAGS) -c $< -o $@

clean:
	@echo "Clean rule"
	@rm -f $(OBJ)

fclean: clean
	@echo "Fclean rule"
	@rm -f $(NAME)

re: fclean all
