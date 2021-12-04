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
    #include "switch_game.h"

int poll_event(game_data* data);

int mouse_move_event(game_data* data);

int close_event(window_t* window);

int check_on_duck(game_data* data, sfVector2f vector);

int check_on_button(game_data* data, sfVector2f vector);

int check_on_button_help(game_data* data, sfVector2f vector);

int check_on_button_end(game_data* data, sfVector2f vector);

int key_event(game_data *window);

int check_on_button_escape(game_data* data, sfVector2f vector);

int check_on_button_credits(game_data* data, sfVector2f vector);

#endif
