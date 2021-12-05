/*
** EPITECH PROJECT, 2021
** BLANK_PROJECT_C
** File description:
** No file there , just an epitech header example
*/

#ifndef BLANK_PROJECT_C_MY_H
    #define BLANK_PROJECT_C_MY_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "fcntl.h"
    #include "sys/stat.h"

int my_putchar(char c);

int my_putstr(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strcat_c(char *dest, char const src);

char *my_itoa(int nb);

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

int my_rand(int i, int j);

int my_atoi(char *str);

#endif
