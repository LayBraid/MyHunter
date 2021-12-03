/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/events.h"

int key_event(game_data *data)
{
    if (data->window->event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape) && data->step == 1)
            switch_game(data, 4);
        else if (sfKeyboard_isKeyPressed(sfKeyEscape) && data->step == 4)
            switch_game(data, 1);
    }
    return 0;
}
