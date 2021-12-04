##
## EPITECH PROJECT, 2021
## BLANK_PROJECT_C
## File description:
## No file there , just an epitech header example
##

MAIN = src/main.c

SRC = src/game.c \
	  src/events/close_event.c \
	  src/events/poll_event.c \
	  src/events/mouse_click_event.c \
	  src/events/mouse_click_event_2.c \
	  src/events/key_event.c \
	  src/utils.c \
	  src/inits.c \
	  src/utils_ducks.c \
	  src/utils_game.c \
	  src/utils_texts.c \
	  src/ducks.c \
	  src/clocks.c \
	  src/clocks_2.c \
	  src/switch_menu.c \
	  src/cursor.c \
	  src/draw.c \
	  src/events/mouse_move_event.c \
	  src/buttons/buttons.c \
	  src/buttons/buttons_2.c \
	  src/buttons/buttons_3.c \
	  src/sound.c \
	  src/data.c

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
	rm -f src/events/*.o
	rm -f src/buttons/*.o
	rm -f src/*.o
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
