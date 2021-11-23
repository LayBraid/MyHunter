##
## EPITECH PROJECT, 2021
## BLANK_PROJECT_C
## File description:
## No file there , just an epitech header example
##

SRC = my_putchar.c \
	  my_putstr.c \
	  my_itoa.c \
	  my_strcpy.c \
	  my_strcat_c.c \
	  my_strlen.c \
	  my_strcat.c \
	  my_rand.c

OBJ = $(SRC:.c=.o)

NAME = lib
CFLAGS += -Werror -Wextra -I./include

$(NAME): $(OBJ)
	ar rc libmy.a *.o
	cp libmy.a ../
	cp my.h ../../include

all: $(NAME)

fclean:
	make clean
	rm -f ../../my.h
	rm -f ../libmy.a

clean:
	rm -f *.o output

re:
	fclean all
