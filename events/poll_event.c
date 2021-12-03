/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/events.h"

int poll_event(game_data* data)
{
    while (sfRenderWindow_pollEvent(data->window->window, &data->window->event)) {
        close_event(data->window);
        mouse_move_event(data);
        key_event(data);
    }
    return 0;
}
