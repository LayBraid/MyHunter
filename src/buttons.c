/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "buttons.h"

int init_play_button(game_data* data)
{
    button* play = malloc(sizeof(button));
    play->sprite = sfSprite_create();
    play->texture = sfTexture_createFromFile("resources/single_play.png", NULL);
    sfSprite_setTexture(play->sprite, play->texture, sfFalse);
    play->animated = sfFalse;
    play->x = 695;
    play->y = 595;
    sfVector2f vector;
    vector.x = play->x;
    vector.y = play->y;
    play->position = vector;
    sfSprite_setPosition(play->sprite, play->position);
    data->play = play;
    return 0;
}

int init_help_button(game_data* data)
{
    button* help = malloc(sizeof(button));
    help->sprite = sfSprite_create();
    help->texture = sfTexture_createFromFile("resources/help.png", NULL);
    sfSprite_setTexture(help->sprite, help->texture, sfFalse);
    help->animated = sfFalse;
    help->x = 1700;
    help->y = 980;
    sfVector2f vector;
    vector.x = help->x;
    vector.y = help->y;
    help->position = vector;
    sfSprite_setPosition(help->sprite, help->position);
    data->help = help;
    return 0;
}

int init_help_back_button(game_data* data)
{
    button* help = malloc(sizeof(button));
    help->sprite = sfSprite_create();
    help->texture = sfTexture_createFromFile("resources/help_text.png", NULL);
    sfSprite_setTexture(help->sprite, help->texture, sfFalse);
    help->animated = sfFalse;
    help->x = 982;
    help->y = 743;
    sfVector2f vector;
    vector.x = 571;
    vector.y = 256;
    help->position = vector;
    sfSprite_setPosition(help->sprite, help->position);
    data->help_back = help;
    return 0;
}

int init_replay_button(game_data* data)
{
    button* play = malloc(sizeof(button));
    play->sprite = sfSprite_create();
    play->texture = sfTexture_createFromFile("resources/play.png", NULL);
    sfSprite_setTexture(play->sprite, play->texture, sfFalse);
    play->animated = sfFalse;
    play->x = 590;
    play->y = 950;
    sfVector2f vector;
    vector.x = play->x;
    vector.y = play->y;
    play->position = vector;
    sfSprite_setPosition(play->sprite, play->position);
    data->replay = play;
    return 0;
}

int init_quit_button(game_data* data)
{
    button* play = malloc(sizeof(button));
    play->sprite = sfSprite_create();
    play->texture = sfTexture_createFromFile("resources/quit.png", NULL);
    sfSprite_setTexture(play->sprite, play->texture, sfFalse);
    play->animated = sfFalse;
    play->x = 990;
    play->y = 950;
    sfVector2f vector;
    vector.x = play->x;
    vector.y = play->y;
    play->position = vector;
    sfSprite_setPosition(play->sprite, play->position);
    data->quit = play;
    return 0;
}
