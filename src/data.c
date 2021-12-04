/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** No file there , just an epitech header example
*/

#include "../include/data.h"

int line_in_buffer(char *buffer)
{
    int nb = 1;

    for (int i = 0; i < my_strlen(buffer); i++)
        if (buffer[i] == '\n')
            nb++;
    return nb;
}

char *get_in_data_saving(void)
{
    int fd;
    struct stat buf;
    char *buffer;

    stat("data/data_saving", &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    fd = open("data/data_saving", O_RDONLY);
    if (fd == -1)
        return "error";
    read(fd, buffer, buf.st_size);
    buffer[buf.st_size - 1] = '\0';
    close(fd);
    return buffer;
}

int put_in_data_saving(int score, char *name)
{
    FILE * inputFile = fopen("data/data_saving", "a");
    char *str = my_itoa(score);

    str = my_strcat_c(str, ':');
    str = my_strcat(str, name);
    str = my_strcat_c(str, '\n');
    if (inputFile == NULL) {
        my_putstr("Cannot open file 'data/data_saving'\n");
        exit(84);
    }
    fwrite(str, 1, my_strlen(str), inputFile);
    fclose(inputFile);
    return (0);
}

char **get_top_score_with_buffer(char *buffer)
{
    int line = line_in_buffer(buffer);
    int last_length = 0;
    int j;
    char *tmp;
    char **top = malloc(sizeof(char *) * line);

    for (int i = 0; i < line; i++) {
        tmp = "";
        for (j = last_length; buffer[j] != '\n' && buffer[j] != '\0'; j++) {
            tmp = my_strcat_c(tmp, buffer[j]);
        }
        last_length += my_strlen(tmp) + 1;
        top[i] = tmp;
    }
    return top;
}

int get_top_score_with_data(game_data *data)
{
    char *buffer = get_in_data_saving();
    char **top = get_top_score_with_buffer(buffer);
    for (int i = 0; top[i]; i++) {
        my_putstr(top[i]);
        my_putchar('\n');
    }
    return 0;
}