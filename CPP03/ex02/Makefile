# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgale <kgale@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 15:36:58 by kgale             #+#    #+#              #
#    Updated: 2021/10/21 17:19:14 by kgale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
FLAGS		=	-g -Wall -Wextra -Werror -MMD -std=c++98 -Wshadow -Wno-shadow
DIR_OBJ		=	obj/
DIR_DEP		=	dep/
SRC			=	main.cpp \
				ClapTrap.cpp  ScavTrap.cpp \
				FlagTrap.cpp
OBJ			=	$(addprefix $(DIR_OBJ), $(SRC:%.cpp=%.o))
DEPS		=	$(addprefix $(DIR_DEP), $(SRC:%.cpp=%.d))
NAME 		=	FlagClapScavTrap

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
