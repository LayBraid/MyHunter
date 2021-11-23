/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/events.h"

int close_event(window_t* window)
{
    if (window->event.type == sfEvtClosed)
        sfRenderWindow_close(window->window);
    return 0;
}
