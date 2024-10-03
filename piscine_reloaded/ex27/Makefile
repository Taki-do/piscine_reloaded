NAME = ft_display_file
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c ft_utils.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY : all clean fclean