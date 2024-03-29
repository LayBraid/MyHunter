/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/utils.h"

int draw_score(window_t* window, int score)
{
    sfFont* font = sfFont_createFromFile("resources/Minecraft.ttf");
    char *str = "Score: ";
    str = my_strcat(str, my_itoa(score * 100));
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
    sfFont* font = sfFont_createFromFile("resources/Minecraft.ttf");
    char *str = "Score: ";
    str = my_strcat(str, my_itoa(score * 100));
    if (!font)
        return EXIT_FAILURE;
    sfText* text = sfText_create();
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 70);
    sfText_setColor(text, sfRed);
    sfVector2f vector2F;
    vector2F.x = 700;
    vector2F.y = 580;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(window->window, text, NULL);
    return 0;
}

int draw_go(window_t* window, int size)
{
    sfFont* font = sfFont_createFromFile("resources/Minecraft.ttf");
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

int draw_top_go(window_t* window, game_data *data)
{
    sfFont* font = sfFont_createFromFile("resources/Minecraft.ttf");
    char *str = "Top: ";
    str = my_strcat(str, my_itoa(my_atoi(data->top->first) * 100));
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
