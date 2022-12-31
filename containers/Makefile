NAME	=	vector
CC		=	clang++
INCLUDES	=	includes
CPPFLAGS	=	-Wall -Werror -Wextra -I$(INCLUDES) -fsized-deallocation
RM			=	rm -rf
SRCS		=	*.cpp

all:	$(NAME)

$(NAME): $(SRCS) 
		$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
		$(RM) $(NAME)

re: fclean all

.PHONY: fclean, all, re