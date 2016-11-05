NAME := myprogram
LIBRARY := libft.a
FLAGS := -Wall -Werror -Wextra
INCLUDES := -I ./includes/
SRCS := ./srcs/*.c

all: $(LIBRARY) $(NAME) clean

$(NAME) :
	gcc -o $(NAME) $(INCLUDES) $(LIBRARY) main.c

$(LIBRARY) :
	gcc $(FLAGS) $(INCLUDES) -c $(SRCS)
	ar rc $(LIBRARY) *.o
	ranlib $(LIBRARY);

clean :
	rm -f *.o

fclean : clean
	rm -f $(LIBRARY) $(NAME)

re : fclean all

norme :
	norminette ./srcs/
	norminette ./includes/
