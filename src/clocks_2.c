/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/clocks.h"

int simplify_clock(game_data *data)
{
    sfRenderWindow_drawSprite(data->window->window,
                              data->font_clear.sprite, NULL);
    sfRenderWindow_drawSprite(data->window->window,
                              data->escape_menu->back->sprite, NULL);
    sfRenderWindow_drawSprite(data->window->window,
                              data->escape_menu->pause->sprite, NULL);
    sfRenderWindow_drawSprite(data->window->window,
                              data->escape_menu->resume->sprite, NULL);
    sfRenderWindow_drawSprite(data->window->window,
                              data->escape_menu->restart->sprite, NULL);
    sfRenderWindow_drawSprite(data->window->window,
                              data->escape_menu->main->sprite, NULL);
    sfRenderWindow_drawSprite(data->window->window,
                              data->escape_menu->quit->sprite, NULL);
    return (0);
}

int clock_credits(game_data* data, sfClock* clock)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 100.0;
    if (seconds > 1.0/6) {
        sfRenderWindow_drawSprite(data->window->window,
                                  data->window->bg.sprite, NULL);
        sfRenderWindow_drawSprite(data->window->window,
                                  data->buttons->credits_back->sprite, NULL);
        sfClock_restart(clock);
    }
    return 0;
}
