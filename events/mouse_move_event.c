/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/events.h"

int check_on_duck(game_data* data, sfVector2f vector)
{
    sfVector2f duck_vector;
    for (int i = 0; i < data->duck_launch; i++) {
        duck_vector.x = data->duck[i]->x;
        duck_vector.y = data->duck[i]->y;
        if (vector.x >= duck_vector.x && vector.x <= duck_vector.x + 96 && vector.y >= duck_vector.y && vector.y <= duck_vector.y + 96 && data->duck[i]->life == sfTrue) {
            kill_duck(data, i);
        }
    }
    return 0;
}

int mouse_move_event(game_data* data)
{
    sfVector2i mouse;
    sfVector2f vector;
    if (data->window->event.type == sfEvtMouseButtonPressed) {
        if (data->step == 1) {
            mouse = sfMouse_getPositionRenderWindow(data->window->window);
            vector.x = mouse.x;
            vector.y = mouse.y;
            check_on_duck(data, vector);
        }
        else if (data->step == 2)
            sfRenderWindow_close(data->window->window);
    }
    return 0;
}
