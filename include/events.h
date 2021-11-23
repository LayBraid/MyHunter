/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_EVENTS_H
    #define MYHUNTER_EVENTS_H

    #include "struct.h"
    #include "ducks.h"

int poll_event(game_data* data);

int mouse_move_event(game_data* data);

int close_event(window_t* window);

#endif
