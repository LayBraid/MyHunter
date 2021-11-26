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
        if (vector.x >= duck_vector.x && vector.x <= duck_vector.x + 96 && vector.y >= duck_vector.y && vector.y <= duck_vector.y + 96 && data->duck[i]->life == sfTrue) { //TODO REDUIRE
            kill_duck(data, i);
        }
    }
    return 0;
}

int check_on_button(game_data* data, sfVector2f vector)
{
    if (vector.x >= data->play->position.x && vector.x <= (data->play->position.x + 410) && vector.y >= data->play->position.y && vector.y <= (data->play->position.y + 90)) //TODO REDUIRE
        data->step = 1;
    if (vector.x >= data->help->position.x && vector.x <= (data->help->position.x + 90) && vector.y >= data->help->position.y && vector.y <= (data->help->position.y + 90)) //TODO REDUIRE
        data->step = 3;
    return 0;
}

int check_on_button_help(game_data* data, sfVector2f vector)
{
    if (vector.x >= 982 && vector.x <= (982 + 247) && vector.y >= 743 && vector.y <= (743 + 81)) //TODO REDUIRE
        data->step = 0;
    return 0;
}

int mouse_move_event(game_data* data)
{
    sfVector2i mouse;
    sfVector2f vector;
    if (data->window->event.type == sfEvtMouseButtonPressed) {
        mouse = sfMouse_getPositionRenderWindow(data->window->window);
        vector.x = mouse.x;
        vector.y = mouse.y;
        if (data->step == 1)
            check_on_duck(data, vector);
        if (data->step == 2)
            sfRenderWindow_close(data->window->window);
        if (data->step == 0)
            check_on_button(data, vector);
        if (data->step == 3)
            check_on_button_help(data, vector);
    }
    return 0;
}
