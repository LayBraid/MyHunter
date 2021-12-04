/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"

int clock_duck(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000.0;
    if (seconds > 1.0/3) {
        draw_sprite(data);
        sfClock_restart(clock);
    }
    return 0;
}

int clock_game_over(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 100.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_drawSprite(data->window->window, data->window->bg.sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->replay->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->quit->sprite, NULL); //TODO REDUIRE
        draw_go(data->window, 150);
        draw_score_go(data->window, data->score);
        sfClock_restart(clock);
    }
    return 0;
}

int clock_play(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 100.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_drawSprite(data->window->window, data->window->bg.sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->title.sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->play->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->help->sprite, NULL); //TODO REDUIRE
        sfClock_restart(clock);
    }
    return 0;
}

int clock_help(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 100.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_drawSprite(data->window->window, data->window->bg.sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->help_back->sprite, NULL); //TODO REDUIRE
        sfClock_restart(clock);
    }
    return 0;
}

int clock_escape(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 100.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_drawSprite(data->window->window, data->window->bg.sprite, NULL); //TODO REDUIRE
        for (int i = 0; i < data->duck_launch; i++)
            sfRenderWindow_drawSprite(data->window->window, data->duck[i]->sprite,
                                      NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->font_clear.sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->escape_menu->back->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->escape_menu->pause->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->escape_menu->resume->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->escape_menu->restart->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->escape_menu->main->sprite, NULL); //TODO REDUIRE
        sfRenderWindow_drawSprite(data->window->window, data->escape_menu->quit->sprite, NULL); //TODO REDUIRE
        sfClock_restart(clock);
    }
    return 0;
}
