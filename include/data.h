/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_DATA_H
    #define MYHUNTER_DATA_H

    #include "game.h"

int line_in_buffer(char *buffer);

char *get_in_data_saving(void);

int put_in_data_saving(int score, char *name);

char **get_top_score_with_buffer(char *buffer);

#endif
