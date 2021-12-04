/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../../include/buttons.h"

int init_escape_pause(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/pause.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 695;
    b->y = 255;
    sfVector2f vector;
    vector.x = b->x;
    vector.y = b->y;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->escape_menu->pause = b;
    return 0;
}

int init_escape_resume(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/resume.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 695;
    b->y = 375;
    sfVector2f vector;
    vector.x = b->x;
    vector.y = b->y;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->escape_menu->resume = b;
    return 0;
}

int init_escape_restart(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/restart.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 695;
    b->y = 495;
    sfVector2f vector;
    vector.x = b->x;
    vector.y = b->y;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->escape_menu->restart = b;
    return 0;
}

int init_escape_main(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/main_menu.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 695;
    b->y = 615;
    sfVector2f vector;
    vector.x = b->x;
    vector.y = b->y;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->escape_menu->main = b;
    return 0;
}

int init_escape_quit(game_data* data)
{
    button* b = malloc(sizeof(button));
    b->sprite = sfSprite_create();
    b->texture = sfTexture_createFromFile("resources/quit_game.png", NULL);
    sfSprite_setTexture(b->sprite, b->texture, sfFalse);
    b->animated = sfFalse;
    b->x = 695;
    b->y = 735;
    sfVector2f vector;
    vector.x = b->x;
    vector.y = b->y;
    b->position = vector;
    sfSprite_setPosition(b->sprite, b->position);
    data->escape_menu->quit = b;
    return 0;
}
