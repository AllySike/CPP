# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 15:57:46 by kgale             #+#    #+#              #
#    Updated: 2021/10/25 15:57:46 by kgale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
FLAGS		=	-g -Wall -Wextra -Werror -MMD -std=c++98 -Wshadow -Wno-shadow
DIR_OBJ		=	obj/
DIR_DEP		=	dep/
SRC			=	main.cpp
OBJ			=	$(addprefix $(DIR_OBJ), $(SRC:%.cpp=%.o))
DEPS		=	$(addprefix $(DIR_DEP), $(SRC:%.cpp=%.d))
NAME 		=	convert

all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(OBJ) $(FLAGS) -o $(NAME)

-include $(DEPS)

$(DIR_OBJ)%.o: %.cpp Makefile
				@mkdir -p $(DIR_OBJ)
				@mkdir -p $(DIR_DEP)
				@${CC} ${FLAGS} -o $@ -c -MT $@ $< ; mv $(DIR_OBJ)*.d $(DIR_DEP)

clean:
				@rm -rf $(DIR_DEP)
				@rm -rf $(DIR_OBJ)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
