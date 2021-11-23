/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/ducks.h"

int reset_duck(game_data* data, int i)
{
    data->duck[i]->anim = 0;
    data->duck[i]->x = -32;
    data->duck[i]->y = my_rand(100, 700);
    data->duck[i]->speed += 15;
    data->duck[i]->life = sfTrue;
    anim_duck(data->duck[i], 0);
    move_duck(data->duck[i], data);
    return 0;
}

int kill_duck(game_data* data, int i)
{
    data->duck[i]->life = sfFalse;
    data->duck[i]->anim = 4;
    data->score++;
    if (data->duck_launch < 5)
        init_ducks(data, data->duck_launch);
    return 0;
}

int next_init_duck(game_data* data, int i)
{
    sfVector2f vector;
    vector.x = 3;
    vector.y = 3;
    sfSprite_setScale(data->duck[i]->sprite, vector);
    data->duck[i]->life = sfTrue;
    data->duck[i]->id = i;
    anim_duck(data->duck[i], data->duck[i]->anim);
    move_duck(data->duck[i], data);
    data->duck_launch += 1;
    return 0;
}

int init_ducks(game_data* data, int i)
{
    data->duck[i] = malloc(sizeof(duck));
    data->duck[i]->sprite = sfSprite_create();
    data->duck[i]-> texture = sfTexture_createFromFile("duck.png", NULL);
    sfSprite_setTexture(data->duck[i]->sprite,
                        data->duck[i]->texture, sfFalse);
    sfIntRect rect = sfSprite_getTextureRect(data->duck[i]->sprite);
    rect.left = 0;
    rect.height = 0;
    rect.width = 32;
    rect.height = 32;
    sfSprite_setTextureRect(data->duck[i]->sprite, rect);
    data->duck[i]->anim = 0;
    data->duck[i]->color = 0;
    data->duck[i]->x = -32;
    data->duck[i]->y = my_rand(100, 700);
    data->duck[i]->speed = data->speed;
    next_init_duck(data, i);
    return 0;
}
