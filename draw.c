/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/draw.h"

int draw_ducks(game_data* data)
{
    for (int i = 0; i < data->duck_launch; i++) {
        if (data->duck[i]->life == sfTrue) {
            move_duck(data->duck[i], data);
            anim_duck(data->duck[i], data->duck[i]->anim);
        } else {
            if (data->duck[i]->anim < 11)
                anim_duck_death(data->duck[i], data->duck[i]->anim);
            move_duck_y(data->duck[i], data);
        }
    }
    return 0;
}

int draw_sprite(game_data* data)
{
    sfRenderWindow_drawSprite(data->window->window, data->window->bg.sprite, NULL); //TODO REDUIRE
    draw_ducks(data);
    for (int i = 0; i < data->duck_launch; i++) {
        sfRenderWindow_drawSprite(data->window->window, data->duck[i]->sprite,
                                  NULL); //TODO REDUIRE
    }
    draw_score(data->window, data->score);
    return 0;
}