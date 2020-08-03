/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** mouve rect
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

int move_sold3(all_t *all)
{
    sfTime time = sfClock_getElapsedTime(all->clock_sold3);
    float seconde = time.microseconds / 1000000.0;

    if (seconde > 0.2) {
        all->rect_sold3.left = all->rect_sold3.left + 69;
        if (all->rect_sold3.left > 150) {
            all->rect_sold3.left = 0;
        }
        sfClock_restart(all->clock_sold3);
    }
    return (0);
}