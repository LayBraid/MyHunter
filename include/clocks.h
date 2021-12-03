/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_CLOCKS_H
    #define MYHUNTER_CLOCKS_H

    #include "struct.h"
    #include "utils.h"
    #include "game.h"
    #include "draw.h"
    #include "buttons.h"

int clock_duck(game_data* data, sfClock* clock);

int clock_game_over(game_data* data, sfClock* clock);

int clock_play(game_data* data, sfClock* clock);

int clock_help(game_data* data, sfClock* clock);

int clock_escape(game_data* data, sfClock* clock);

#endif
