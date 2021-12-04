/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../../include/buttons.h"

int init_credits_button(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/credits.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 1410;
    b->y = 980;
    sfVector2f vector;
    vector.x = b->x;
    vector.y = b->y;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->buttons->credits = b;
    return 0;
}

int init_credits_back_button(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/credits_text.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 1410;
    b->y = 980;
    sfVector2f vector;
    vector.x = 532;
    vector.y = 312;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->buttons->credits_back = b;
    return 0;
}
