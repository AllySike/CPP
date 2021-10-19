
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/17 13:10:53 by kgale             #+#    #+#              #
#    Updated: 2021/07/12 19:51:39 by kgale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
CC_FLAGS	=	-Wall -Wextra -Werror
RM			=	rm -rf
SRCS		=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp
OBJS 		=	$(SRCS:%.cpp=$(DIR_OBJS)%.o)
NAME 		=	violence

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CC) $(CC_FLAGS) $(OBJS) -o $(NAME)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
