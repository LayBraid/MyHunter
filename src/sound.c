/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/sound.h"

int init_sound(game_data *data)
{
    data->killed = sfMusic_createFromFile("resources/kilL.wav");
    data->shoot = sfMusic_createFromFile("resources/shoot.wav");
    return 0;
}
