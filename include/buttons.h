/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_BUTTONS_H
    #define MYHUNTER_BUTTONS_H

    #include "struct.h"
    #include "my.h"

int init_play_button(game_data* data);

int init_help_button(game_data* data);

int init_help_back_button(game_data* data);

int init_replay_button(game_data* data);

int init_quit_button(game_data* data);

int init_escape_pause(game_data* data);

int init_escape_resume(game_data* data);

int init_escape_restart(game_data* data);

int init_escape_main(game_data* data);

int init_escape_quit(game_data* data);

#endif
