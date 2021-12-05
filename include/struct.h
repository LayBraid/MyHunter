/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#ifndef MYHUNTER_STRUCT_C_H
    #define MYHUNTER_STRUCT_C_H

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>

typedef struct button_t
{
    sfSprite* sprite;
    sfTexture* texture;
    sfBool animated;
    sfIntRect rect;
    int x;
    int y;
    sfVector2f position;
    int anim_pos;
} button;

typedef struct duck_object
{
    sfSprite* sprite;
    sfTexture* texture;
    int anim;
    int anim_nb;
    int color;
    float x;
    float y;
    float speed;
    int id;
    sfBool life;
} duck;

typedef struct sprite_background
{
    sfSprite* sprite;
    sfTexture* texture;
    char* path;
} background;

typedef struct sprite_cursor
{
    sfSprite* sprite;
    sfTexture* texture;
} cursor_t;

typedef struct window_struct
{
    sfRenderWindow* window;
    sfEvent event;
    background bg;
} window_t;

typedef struct simple_image
{
    sfSprite* sprite;
    sfTexture* texture;
} img;

typedef struct all_buttons
{
    button* play;
    button* help;
    button* help_back;
    button* replay;
    button* quit;
    button* credits;
    button* credits_back;
} buttons_t;

typedef struct escape_menu_struct
{
    img *back;
    button *pause;
    button* resume;
    button* restart;
    button* main;
    button* quit;
} escape_menu_t;

typedef struct top_3_struct
{
    char *first;
    char *second;
    char *three;
} top_3_t;

typedef struct data
{
    window_t* window;
    int score;
    int level;
    int duck_launch;
    float speed;
    int step;
    buttons_t *buttons;
    cursor_t *cursor;
    duck** duck;
    escape_menu_t *escape_menu;
    img title;
    img font_clear;
    top_3_t *top;
    sfMusic *killed;
    sfMusic *shoot;
} game_data;

#endif
