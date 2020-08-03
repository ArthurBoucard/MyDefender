/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** hunter
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int create_all(all_t *all)
{
    all->window = create_my_window(1920, 1080);
    create_t(all);
    create_sprite(all);
    create_rect(all);
    create_sound(all);
    set_texture(all);
    all->clock_sold1 = sfClock_create();
    all->clock_movesold1 = sfClock_create();
    all->clock_sold2 = sfClock_create();
    all->clock_movesold2 = sfClock_create();
    all->clock_sold3 = sfClock_create();
    all->clock_movesold3 = sfClock_create();
    all->clock_movetower1 = sfClock_create();
    all->clock_menu = sfClock_create();
    return (0);
}

int main(int ac)
{
    all_t all;

    all.m = 0;
    if (ac == 1) {
        create_all(&all);
        menu(&all);
    } else {
        return (84);
    }
    destroy1(&all);
    return (0);
}