/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../../include/events.h"

int check_on_button_credits(game_data* data, sfVector2f vector)
{
    if (vector.x >= 1022 && vector.x <= (1022 + 247) && vector.y >= 687 &&
        vector.y <= (687 + 81))
        switch_game(data, 0);
    return 0;
}
