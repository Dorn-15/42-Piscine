NAME 		= libft.a

SRC 		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS 		= ./srcs/
HEAD 		= ./includes/

CFLAGS 		= -Wall -Wextra -Werror

SRC_FULL 	= $(addprefix  $(SRCS), $(SRC))
OBJS 		= $(SRC_FULL:.c=.o)

.c.o 		: 
			gcc $(CFLAGS) -c -I $(HEAD) $< -o ${<:.c=.o}

$(NAME)		: $(OBJS)
			ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean		:
			rm -f ${OBJS}

fclean		: clean
			rm -f ${NAME}

re			: fclean all

.PHONY		: all clean fclean re
