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

NAME = identify

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

ROOT  	=	.
OPATH 	=	$(ROOT)/
CPATH 	=	$(ROOT)/

SRC =	main.cpp

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
