/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/inits.h"

int init_font_clear(game_data* data)
{
    sfVector2f vector;

    data->font_clear.sprite = sfSprite_create();
    data->font_clear.texture = sfTexture_createFromFile("resources/font_clear.png", NULL);
    sfSprite_setTexture(data->font_clear.sprite, data->font_clear.texture, sfFalse);
    vector.x = 2.8f;
    vector.y = 2.8f;
    sfSprite_setScale(data->font_clear.sprite, vector);
    return 0;
}

int init_escape(game_data* data)
{
    sfVector2f vector;

    data->escape_menu->back = malloc(sizeof(img));
    data->escape_menu->back->sprite = sfSprite_create();
    data->escape_menu->back->texture = sfTexture_createFromFile("resources/escape_back.png", NULL);
    sfSprite_setTexture(data->escape_menu->back->sprite, data->escape_menu->back->texture, sfFalse);
    vector.x = 2.8f;
    vector.y = 2.8f;
    sfSprite_setScale(data->escape_menu->back->sprite, vector);
    init_escape_pause(data);
    init_escape_restart(data);
    init_escape_resume(data);
    init_escape_main(data);
    init_escape_quit(data);
    return 0;
}

int init_game(game_data* data)
{
    data->score = 0;
    data->duck_launch = 0;
    data->speed = 1.0f;
    data->step = 0;
    data->duck = malloc(sizeof(duck*) * 6);
    data->escape_menu = malloc(sizeof(escape_menu_t));

    init_play_button(data);
    init_help_button(data);
    init_help_back_button(data);
    init_quit_button(data);
    init_replay_button(data);
    init_cursor(data);
    title(data);
    init_font_clear(data);
    init_escape(data);
    return 0;
}
