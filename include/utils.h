/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_UTILS_H
    #define MYHUNTER_UTILS_H

    #include <SFML/Graphics.h>
    #include "struct.h"
    #include "my.h"
    #include "ducks.h"
    #include "game.h"

window_t* window_create(char *name);

void move_duck(duck* d, game_data* data);

int anim_duck(duck *d, int want);

int draw_score(window_t* window, int score);

void move_duck_y(duck* d, game_data* data);

int anim_duck_death(duck *d, int want);

int draw_score_go(window_t* window, int score);

int draw_go(window_t* window, int size);

int draw_top_go(window_t* window, game_data *data);

#endif
