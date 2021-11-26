##
## EPITECH PROJECT, 2021
## BLANK_PROJECT_C
## File description:
## No file there , just an epitech header example
##

MAIN = main.c

SRC = game.c \
	  events/close_event.c \
	  events/poll_event.c \
	  utils.c \
	  utils_ducks.c \
	  utils_texts.c \
	  ducks.c \
	  clocks.c \
	  draw.c \
	  events/mouse_move_event.c \
	  buttons.c

TESTS =

OBJ = $(MAIN:.c=.o) $(SRC:.c=.o)

NAME = myhunter
SRC_LIB = -Llib -lmy
CFLAGS += -Wextra -Iinclude

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(OBJ) $(SRC_LIB) -o./$(NAME) -g3 -l csfml-audio -l csfml-graphics -l csfml-network -l csfml-system -l csfml-window

all: $(NAME)

fclean:
	cd lib/my && make fclean
	make clean
	rm -f $(NAME)
	rm -f unit-tests

clean:
	rm -f *.o
	rm -f events/*.o
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.c.gcov

re:
	make fclean
	make

tests_run:
	gcc $(TESTED_SRC) $(TESTS_SRC) $(SRC_LIB) $(CFLAGS) -lcriterion -o./unit-tests --coverage
	./unit-tests

debug:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g

valgrind:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g3
	valgrind ./$(NAME)

gdb:
	gcc $(SRC) $(SRC_LIB) -o./$(NAME) -g
	gdb ./$(NAME)
