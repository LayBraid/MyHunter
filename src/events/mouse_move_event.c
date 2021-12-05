/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../../include/events.h"

int mouse_check_step(game_data *data, sfVector2f vector)
{
    if (data->step == 2)
        check_on_button_end(data, vector);
    if (data->step == 0)
        check_on_button(data, vector);
    if (data->step == 3)
        check_on_button_help(data, vector);
    if (data->step == 4)
        check_on_button_escape(data, vector);
    if (data->step == 5)
        check_on_button_credits(data, vector);
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
        if (data->step == 1) {
            //sfMusic_stop(data->shoot);
            //sfMusic_play(data->shoot);
            check_on_duck(data, vector);
        } else
            mouse_check_step(data, vector);
    }
    return 0;
}
