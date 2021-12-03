/*
** EPITECH PROJECT, 2021
** BLANK_PROJECT_C
** File description:
** No file there , just an epitech header example
*/

#include "include/game.h"

int help_message(void)
{
    my_putstr("--- MyHunter [HELP] ---\n\n");
    my_putstr("./myhunter >> launch game\n\n");
    my_putstr("Click on '?' in main menu\nto get more help.\n");
    my_putstr("--- Thanks for playing ---\n");
    return 1;
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        return help_message();
    game_launch();
    return (1);
}
