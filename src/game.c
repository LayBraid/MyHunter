/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/game.h"

int title(game_data* data)
{
    sfVector2f vector;
    vector.x = 558;
    vector.y = 444;

    data->title.sprite = sfSprite_create();
    data->title.texture = sfTexture_createFromFile("resources/title.png", NULL);
    sfSprite_setTexture(data->title.sprite, data->title.texture, sfFalse);
    sfSprite_setPosition(data->title.sprite, vector);
    return 0;
}

int game_clock_search(game_data *data, sfClock *clock)
{
    if (data->step == 0)
        clock_play(data, clock);
    if (data->step == 1)
        clock_duck(data, clock);
    if (data->step == 2)
        clock_game_over(data, clock);
    if (data->step == 3)
        clock_help(data, clock);
    if (data->step == 4)
        clock_escape(data, clock);
    if (data->step == 5)
        clock_credits(data, clock);
    return 0;
}

int game_launch(void)
{
    sfClock* clock;
    clock = sfClock_create();
    game_data* data = malloc(sizeof(game_data));
    data->window = window_create("MyHunter");
    sfRenderWindow_setMouseCursorVisible(data->window->window, sfFalse);
    init_game(data);
    init_ducks(data, data->duck_launch);
    while (sfRenderWindow_isOpen(data->window->window)) {
        sfRenderWindow_clear(data->window->window, sfBlack);
        poll_event(data);
        game_clock_search(data, clock);
        draw_cursor(data);
        sfRenderWindow_display(data->window->window);
    }
    sfRenderWindow_destroy(data->window->window);
    return (0);
}
