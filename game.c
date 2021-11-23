/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/game.h"

int init_game(game_data* data)
{
    data->score = 0;
    data->duck_launch = 0;
    data->speed = 10;
    data->step = 2;
    data->duck = malloc(sizeof(duck*) * 6);
    return 0;
}

int game_over(game_data* data)
{
    data->step = 2;
    return 0;
}

int game_launch(void)
{
    sfClock* clock;
    clock = sfClock_create();
    game_data* data = malloc(sizeof(game_data));
    data->window = window_create("MyHunter");
    init_game(data);
    init_ducks(data, data->duck_launch);
    while (sfRenderWindow_isOpen(data->window->window)) {
        poll_event(data);
        if (data->step == 1)
            clock_duck(data, clock);
        else if (data->step == 2)
            clock_game_over(data, clock);
    }
    sfRenderWindow_destroy(data->window->window);
    return (0);
}
