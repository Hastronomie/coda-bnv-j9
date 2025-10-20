#Makefile
NAME = ex_1 

SRCS = main.c \
	str_cpy.c \
    str_len.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
