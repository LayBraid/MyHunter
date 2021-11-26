/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/utils.h"

int anim_duck(duck *d, int want)
{
    sfIntRect rect = sfSprite_getTextureRect(d->sprite);
    if (want == 3) {
        d->anim = 0;
        want = 0;
    } else
        d->anim++;
    rect.left = want * 32 + (want * 6);
    rect.height = 0 + (d->color * 32);
    rect.width = 32;
    rect.height = 32;
    sfSprite_setTextureRect(d->sprite, rect);
    return 0;
}

int anim_duck_death(duck *d, int want)
{
    sfIntRect rect = sfSprite_getTextureRect(d->sprite);
    d->anim++;
    rect.left = want * 32 + (want * 6);
    rect.height = 0 + (d->color * 32);
    rect.width = 32;
    rect.height = 32;
    sfSprite_setTextureRect(d->sprite, rect);
    return 0;
}

void move_duck(duck* d, game_data* data)
{
    sfVector2f move = sfSprite_getPosition(d->sprite);
    move.x = d->x;
    move.y = d->y;
    sfSprite_setPosition(d->sprite, move);
    d->x += 1 * d->speed;
    if (d->x > 1800)
        game_over(data);
}

void move_duck_y(duck* d, game_data* data)
{
    if (d->y > 1080) {
        reset_duck(data, d->id);
        return;
    }
    sfVector2f move = sfSprite_getPosition(d->sprite);
    move.x = (float) d->x;
    move.y = (float) d->y;
    sfSprite_setPosition(d->sprite, move);
    d->y += 30;
}
