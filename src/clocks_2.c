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
