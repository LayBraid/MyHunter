/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/clocks.h"

int clock_duck(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_clear(data->window->window, sfBlack);
        draw_sprite(data);
        sfRenderWindow_display(data->window->window);
        sfClock_restart(clock);
    }
    return 0;
}

int clock_game_over(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_clear(data->window->window, sfBlack);
        sfRenderWindow_drawSprite(data->window->window, data->window->bg.sprite, NULL); //TODO REDUIRE
        draw_go(data->window, 150);
        draw_score_go(data->window, data->score);
        draw_exit(data->window);
        sfRenderWindow_display(data->window->window);
        sfClock_restart(clock);
    }
    return 0;
}