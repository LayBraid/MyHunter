/*
** EPITECH PROJECT, 2021
** BLANK_PROJECT_C
** File description:
** No file there , just an epitech header example
*/

#include "include/game.h"

int help_message(void)
{
    my_putstr("help message");
    return 1;
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        return help_message();
    game_launch();
    return (0);
}
