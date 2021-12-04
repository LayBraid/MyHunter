/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/clocks.h"

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
        sfRenderWindow_drawSprite(data->window->window,
                                  data->window->bg.sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->replay->sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->quit->sprite, NULL);
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
        sfRenderWindow_drawSprite(data->window->window,
                                  data->window->bg.sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->title.sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->play->sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->help->sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->credits->sprite, NULL);
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
        sfRenderWindow_drawSprite(data->window->window,
                                  data->window->bg.sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->help_back->sprite, NULL);
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
        sfRenderWindow_drawSprite(data->window->window,
                                  data->window->bg.sprite, NULL);
        for (int i = 0; i < data->duck_launch; i++)
            sfRenderWindow_drawSprite(data->window->window,
                                      data->duck[i]->sprite,NULL);
        simplify_clock(data);
        sfClock_restart(clock);
    }
    return 0;
}
