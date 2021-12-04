/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "cursor.h"

int init_cursor(game_data *data)
{
    data->cursor = malloc(sizeof(cursor_t));
    data->cursor->sprite = sfSprite_create();
    data->cursor->texture = sfTexture_createFromFile("resources/cursor.png", NULL); //TODO REDUIRE
    sfSprite_setTexture(data->cursor->sprite, data->cursor->texture, sfFalse);
    switch_cursor(data, 64);
    return 0;
}

int switch_cursor(game_data *data, int nb)
{
    sfIntRect rect = sfSprite_getTextureRect(data->cursor->sprite);

    rect.left = nb;
    rect.height = 0;
    rect.width = 64;
    rect.height = 64;
    sfSprite_setTextureRect(data->cursor->sprite, rect);
}
