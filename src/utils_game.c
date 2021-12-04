/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/game.h"

int reset_game(game_data* data)
{
    data->score = 0;
    data->duck_launch = 0;
    data->speed = 1.0f;
    data->duck = malloc(sizeof(duck*) * 6);
    data->step = 0;
    switch_cursor(data, 64);
    init_ducks(data, data->duck_launch);
    return 0;
}

int replay_game(game_data* data)
{
    data->score = 0;
    data->duck_launch = 0;
    data->speed = 1.0f;
    data->duck = malloc(sizeof(duck*) * 6);
    data->step = 1;
    switch_cursor(data, 64);
    init_ducks(data, data->duck_launch);
    return 0;
}
