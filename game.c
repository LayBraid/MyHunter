/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/game.h"

int title(game_data* data)
{
    sfVector2f vector;
    vector.x = 558;
    vector.y = 444;

    data->title.sprite = sfSprite_create();
    data->title.texture = sfTexture_createFromFile("title.png", NULL);
    sfSprite_setTexture(data->title.sprite, data->title.texture, sfFalse);
    sfSprite_setPosition(data->title.sprite, vector);
    return 0;
}

int init_game(game_data* data)
{
    data->score = 0;
    data->duck_launch = 0;
    data->speed = 10;
    data->step = 0;
    data->duck = malloc(sizeof(duck*) * 6);

    init_play_button(data);
    init_help_button(data);
    init_help_back_button(data);
    init_quit_button(data);
    init_replay_button(data);
    title(data);
    return 0;
}

int replay_game(game_data* data)
{
    data->score = 0;
    data->duck_launch = 0;
    data->speed = 10;
    data->duck = malloc(sizeof(duck*) * 6);
    data->step = 1;
    init_ducks(data, data->duck_launch);
    return 0;
}

int game_over(game_data* data)
{
    data->step = 2;
    return 0;
}

int game_launch(void)
{
    sfClock* clock;
    clock = sfClock_create();
    game_data* data = malloc(sizeof(game_data));
    data->window = window_create("MyHunter");
    init_game(data);
    init_ducks(data, data->duck_launch); //TODO mettre quand on clique sur le bouton play !
    while (sfRenderWindow_isOpen(data->window->window)) {
        poll_event(data);
        if (data->step == 0)
            clock_play(data, clock);
        if (data->step == 1)
            clock_duck(data, clock);
        if (data->step == 2)
            clock_game_over(data, clock);
        if (data->step == 3)
            clock_help(data, clock);
    }
    sfRenderWindow_destroy(data->window->window);
    return (0);
}
