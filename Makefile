NAME = libft.a
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I ./includes/
SRCS = ./srcs/*.c

all: $(NAME)

$(NAME) :
	gcc $(FLAGS) $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME);

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

norme :
	norminette ./srcs/
	norminette ./includes/

.PHONY: all clean fclean re
