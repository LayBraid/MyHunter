/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

window_t* window_create(char *name)
{
    sfVideoMode mode = {1800, 1080, 32};
    window_t* window = malloc(sizeof(window_t));

    window->window = sfRenderWindow_create(mode, name,
                                           sfResize | sfClose, NULL);
    window->bg.sprite = sfSprite_create();
    window->bg.texture = sfTexture_createFromFile("resources/font.png", NULL);
    sfSprite_setTexture(window->bg.sprite, window->bg.texture, sfTrue);
    sfRenderWindow_setFramerateLimit(window->window, 130);
    if (!window->window)
        return NULL;
    return window;
}
