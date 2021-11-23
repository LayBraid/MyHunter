/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "include/utils.h"

int draw_score(window_t* window, int score)
{
    sfFont* font = sfFont_createFromFile("Minecraft.ttf");
    char *str = "Score: ";
    str = my_strcat(str, my_itoa(score));
    if (!font)
        return EXIT_FAILURE;
    sfText* text = sfText_create();
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfVector2f vector2F;
    vector2F.x = 780;
    vector2F.y = 1000;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(window->window, text, NULL);
    return 0;
}

int draw_score_go(window_t* window, int score)
{
    sfFont* font = sfFont_createFromFile("Minecraft.ttf");
    char *str = "Score: ";
    str = my_strcat(str, my_itoa(score));
    if (!font)
        return EXIT_FAILURE;
    sfText* text = sfText_create();
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 70);
    sfText_setColor(text, sfRed);
    sfVector2f vector2F;
    vector2F.x = 700;
    vector2F.y = 500;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(window->window, text, NULL);
    return 0;
}

int draw_go(window_t* window, int size)
{
    sfFont* font = sfFont_createFromFile("Minecraft.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText* text = sfText_create();
    sfText_setString(text, "GAME OVER !");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, sfRed);
    sfVector2f vector2F;
    vector2F.x = 400;
    vector2F.y = 350;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(window->window, text, NULL);
    return 0;
}

int draw_exit(window_t* window)
{
    sfFont* font = sfFont_createFromFile("Minecraft.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText* text = sfText_create();
        sfText_setString(text, "CLICK TO EXIT GAME");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfRed);
    sfVector2f vector2F;
    vector2F.x = 630;
    vector2F.y = 1000;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(window->window, text, NULL);
    return 0;
}