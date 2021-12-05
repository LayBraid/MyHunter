/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/ducks.h"

int reset_duck(game_data* data, int i)
{
    data->duck[i]->life = sfTrue;
    data->duck[i]->anim = 0;
    data->duck[i]->x = -100;
    data->duck[i]->y = my_rand(100, 700);
    data->speed += 0.3f;
    data->duck[i]->speed = data->speed;
    anim_duck(data->duck[i], 0);
    move_duck(data->duck[i], data);
    return 0;
}

int kill_duck(game_data* data, int i)
{
    //sfMusic_stop(data->killed);
    //sfMusic_play(data->killed);
    data->duck[i]->life = sfFalse;
    data->duck[i]->anim = 4;
    data->score++;
    data->duck[i]->speed = 0.5f;
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
    data->duck[i]-> texture = sfTexture_createFromFile("resources/duck1.png", NULL);
    sfSprite_setTexture(data->duck[i]->sprite,
                        data->duck[i]->texture, sfFalse);
    sfIntRect rect = sfSprite_getTextureRect(data->duck[i]->sprite);
    rect.left = 0;
    rect.height = 0;
    rect.width = 32;
    rect.height = 32;
    sfSprite_setTextureRect(data->duck[i]->sprite, rect);
    data->duck[i]->anim = 0;
    data->duck[i]->color = my_rand(0, 2);
    data->duck[i]->x = -100;
    data->duck[i]->y = my_rand(100, 700);
    data->duck[i]->speed = data->speed;
    next_init_duck(data, i);
    return 0;
}
