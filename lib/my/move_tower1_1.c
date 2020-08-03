/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** move_tower1_1
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

sfVector2f pos_mouse = {0.00, 0.00};

void tower1(all_t *all)
{
    if (pos_mouse.x > 935 && pos_mouse.x < 1020 && pos_mouse.y > 340
    && pos_mouse.y < 410 && all->tow1 == 3 &&
    sfClock_getElapsedTime(all->clock_movetower1).microseconds >= 900000) {
        if (all->rect_tow1.left > 250) {
            all->rect_tow1.left = 455;
        } else {
            all->rect_tow1.left += 91.99999999999997;
            sfClock_restart(all->clock_movetower1);
        }
    }
    if (pos_mouse.x > 860 && pos_mouse.x < 945 && pos_mouse.y > 560
    && pos_mouse.y < 630 && all->tow2 == 3 &&
    sfClock_getElapsedTime(all->clock_movetower1).microseconds >= 900000) {
        if (all->rect_tow2.left > 250) {
            all->rect_tow2.left = 455;
        } else {
            all->rect_tow2.left += 91.99999999999997;
            sfClock_restart(all->clock_movetower1);
        }
    }
}

void tower2(all_t *all)
{
    if (pos_mouse.x > 1200 && pos_mouse.x < 1280 && pos_mouse.y > 560
    && pos_mouse.y < 630 && all->tow3 == 3 &&
    sfClock_getElapsedTime(all->clock_movetower1).microseconds >= 900000) {
        if (all->rect_tow3.left > 250) {
            all->rect_tow3.left = 455;
        } else {
            all->rect_tow3.left += 91.99999999999997;
            sfClock_restart(all->clock_movetower1);
        }
    }
    if (pos_mouse.x > 1740 && pos_mouse.x < 1830 && pos_mouse.y > 770
    && pos_mouse.y < 840 && all->tow5 == 3 &&
    sfClock_getElapsedTime(all->clock_movetower1).microseconds >= 900000) {
        if (all->rect_tow5.left > 250) {
            all->rect_tow5.left = 455;
        } else {
            all->rect_tow5.left += 91.99999999999997;
            sfClock_restart(all->clock_movetower1);
        }
    }
}

void move_tower1(all_t *all)
{
    pos_mouse.x = all->event.mouseButton.x;
    pos_mouse.y = all->event.mouseButton.y;
    tower1(all);
    tower2(all);
    if (pos_mouse.x > 1820 && pos_mouse.x < 1900 && pos_mouse.y > 560
    && pos_mouse.y < 630 && all->tow6 == 3 &&
    sfClock_getElapsedTime(all->clock_movetower1).microseconds >= 900000) {
        if (all->rect_tow6.left > 250) {
            all->rect_tow6.left = 455;
        } else {
            all->rect_tow6.left += 91.99999999999997;
            sfClock_restart(all->clock_movetower1);
        }
    }
}