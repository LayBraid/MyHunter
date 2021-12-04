/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_GAME_H
    #define MYHUNTER_GAME_H

    #include "struct.h"
    #include "my.h"
    #include "events.h"
    #include "utils.h"
    #include "ducks.h"
    #include "clocks.h"
    #include "buttons.h"
    #include "cursor.h"
    #include "inits.h"
    #include "sound.h"
    #include "data.h"

int title(game_data* data);

int game_launch(void);

int replay_game(game_data* data);

int reset_game(game_data* data);

#endif
