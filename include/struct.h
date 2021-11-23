/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_STRUCT_C_H
    #define MYHUNTER_STRUCT_C_H

    #include <SFML/Graphics.h>

typedef struct duck_object
{
    sfSprite* sprite;
    sfTexture* texture;
    int anim;
    int color;
    int x;
    int y;
    int speed;
    int id;
    sfBool life;
} duck;

typedef struct sprite_background
{
    sfSprite* sprite;
    sfTexture* texture;
    char* path;
} background;

typedef struct window_struct
{
    sfRenderWindow* window;
    sfEvent event;
    background bg;
} window_t;

typedef struct data
{
    window_t* window;
    int score;
    int duck_launch;
    int speed;
    int step;
    duck** duck;
} game_data;

#endif
