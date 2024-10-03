NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC_P = srcs/
INC_P = includes/
SRC = $(SRC_P)ft_putchar.c $(SRC_P)ft_putstr.c $(SRC_P)ft_strcmp.c $(SRC_P)ft_strlen.c \
		$(SRC_P)ft_swap.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(FLAGS) -I $(INC_P) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re