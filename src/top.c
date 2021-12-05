/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/top.h"

int check_switch(game_data *data, int i, char *str)
{
    if (i == 1) {
        data->top->three = data->top->second;
        data->top->second = data->top->first;
        data->top->first = str;
    }
    if (i == 2) {
        data->top->three = data->top->second;
        data->top->second = str;
    }
    if (i == 3)
        data->top->three = str;
    return 0;
}

int get_top_score_with_data(game_data *data)
{
    char *buffer = get_in_data_saving();
    char **top = get_top_score_with_buffer(buffer);
    for (int i = 0; top[i]; i++) {
        if (my_atoi(top[i]) > my_atoi(data->top->first)) {
            check_switch(data, 1, top[i]);
            continue;
        }
        if (my_atoi(top[i]) > my_atoi(data->top->second)) {
            check_switch(data, 2, top[i]);
            continue;
        }
        if (my_atoi(top[i]) > my_atoi(data->top->three)) {
            check_switch(data, 3, top[i]);
            continue;
        }
    }
    return 0;
}
