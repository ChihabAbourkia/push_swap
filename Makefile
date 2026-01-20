SRCS	= parsing_utils.c stack_build.c main.c split.c \
stack_free.c  big_sort.c small_sort.c \
retate.c reverse_retate.c swap.c push.c sort_utils.c\
args_parsing.c

OBJS	= $(SRCS:.c=.o)
CC		= cc
RM		= rm -f
CFLAGS	= -g -Wall -Wextra -Werror 

NAME	= push_swap

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
