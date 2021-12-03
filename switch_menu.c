/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/switch_game.h"

int switch_game(game_data *data, int i)
{
    if (i == 0) {
        data->step = 0;
        switch_cursor(data, 64);
    }
    if (i == 1) {
        data->step = 1;
        switch_cursor(data, 0);
    }
    if (i == 2) {
        data->step = 2;
        switch_cursor(data, 64);
    }
    if (i == 3)
        data->step = 3;
    if (i == 4) {
        data->step = 4;
        switch_cursor(data, 64);
    }
    if (i == 5) {
        data->step = 0;
        replay_game(data);
    }
    return (0);
}
