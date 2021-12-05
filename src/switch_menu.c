/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/switch_game.h"

int switch_game_next(game_data *data, int i)
{
    if (i == 4) {
        data->step = 4;
        switch_cursor(data, 64);
        return 4;
    }
    if (i == 999) {
        data->step = 0;
        replay_game(data);
        return 999;
    }
    if (i == 5) {
        data->step = 5;
        switch_cursor(data, 64);
        return 5;
    }
    return 0;
}

int switch_game(game_data *data, int i)
{
    if (i == 0) {
        data->step = 0;
        reset_game(data);
        return 0;
    }
    if (i == 1) {
        data->step = 1;
        switch_cursor(data, 0);
        return 1;
    }
    if (i == 2) {
        data->step = 2;
        put_in_data_saving(data->score, "name");
        get_top_score_with_data(data);
        switch_cursor(data, 64);
        return 3;
    }
    if (i == 3) {
        data->step = 3;
        return 3;
    }
    return switch_game_next(data, i);
}
