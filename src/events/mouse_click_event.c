/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "events.h"

int check_on_duck(game_data* data, sfVector2f vector)
{
    sfVector2f duck_vector;
    for (int i = 0; i < data->duck_launch; i++) {
        duck_vector.x = data->duck[i]->x;
        duck_vector.y = data->duck[i]->y;
        if (vector.x >= duck_vector.x && vector.x <= duck_vector.x + 96 &&
            vector.y >= duck_vector.y && vector.y <= duck_vector.y + 96 &&
            data->duck[i]->life == sfTrue) {
            kill_duck(data, i);
        }
    }
    return 0;
}

int check_on_button(game_data* data, sfVector2f vector)
{
    if (vector.x >= data->buttons->play->position.x &&
        vector.x <= (data->buttons->play->position.x + 410) &&
        vector.y >= data->buttons->play->position.y &&
        vector.y <= (data->buttons->play->position.y + 90))
        switch_game(data, 1);
    if (vector.x >= data->buttons->help->position.x &&
        vector.x <= (data->buttons->help->position.x + 90) &&
        vector.y >= data->buttons->help->position.y &&
        vector.y <= (data->buttons->help->position.y + 90))
        switch_game(data, 3);
    if (vector.x >= data->buttons->credits->position.x &&
        vector.x <= (data->buttons->credits->position.x + 275) &&
        vector.y >= data->buttons->credits->position.y &&
        vector.y <= (data->buttons->credits->position.y + 90))
        switch_game(data, 5);
    return 0;
}

int check_on_button_help(game_data* data, sfVector2f vector)
{
    if (vector.x >= 982 && vector.x <= (982 + 247) && vector.y >= 743 &&
        vector.y <= (743 + 81))
        switch_game(data, 0);
    return 0;
}

int check_on_button_end(game_data* data, sfVector2f vector)
{
    if (vector.x >= 590 && vector.x <= (590 + 353) && vector.y >= 950 &&
        vector.y <= (950 + 90))
        replay_game(data);
    if (vector.x >= 990 && vector.x <= (990 + 177) && vector.y >= 950 &&
        vector.y <= (950 + 90))
        sfRenderWindow_close(data->window->window);
    return 0;
}

int check_on_button_escape(game_data* data, sfVector2f vector)
{
    if (vector.x >= 695 && vector.x <= (695 + 410) && vector.y >= 375 &&
        vector.y <= (375 + 90))
        switch_game(data, 1);
    if (vector.x >= 695 && vector.x <= (695 + 410) && vector.y >= 495 &&
        vector.y <= (495 + 90))
        switch_game(data, 999);
    if (vector.x >= 695 && vector.x <= (695 + 410) && vector.y >= 615 &&
        vector.y <= (615 + 90))
        switch_game(data, 0);
    if (vector.x >= 695 && vector.x <= (695 + 410) && vector.y >= 735 &&
        vector.y <= (735 + 90))
        sfRenderWindow_close(data->window->window);
    return 0;
}
