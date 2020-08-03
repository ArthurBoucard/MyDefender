/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** mouse_event1_1
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

sfVector2f pos_mouse1_1 = {0.00, 0.00};
sfVector2f pos_tow1 = {935.00, 250.00};
sfVector2f pos_tow2 = {860.00, 470.00};
sfVector2f pos_tow3 = {1205.00, 470.00};
sfVector2f pos_tow5 = {1740.00, 680.00};
sfVector2f pos_tow6 = {1820.00, 470.00};

void mouse_event1_3(all_t *all)
{
    if (pos_mouse1_1.x > 1200 && pos_mouse1_1.x < 1280 && pos_mouse1_1.y > 560
    && pos_mouse1_1.y < 630 || all->tow3 == 3) {
        sfSprite_setPosition(all->s_tower3, pos_tow3);
        sfSprite_setTextureRect(all->s_tower3, all->rect_tow3);
        sfRenderWindow_drawSprite(all->window, all->s_tower3, NULL);
        if (all->tow3 != 3) {
            sfClock_restart(all->clock_movetower1);
            all->tow3 = 3;
        }
    }
    if (pos_mouse1_1.x > 1740 && pos_mouse1_1.x < 1830 && pos_mouse1_1.y > 770
    && pos_mouse1_1.y < 840 || all->tow5 == 3) {
        sfSprite_setPosition(all->s_tower5, pos_tow5);
        sfSprite_setTextureRect(all->s_tower5, all->rect_tow5);
        sfRenderWindow_drawSprite(all->window, all->s_tower5, NULL);
        if (all->tow5 != 3) {
            sfClock_restart(all->clock_movetower1);
            all->tow5 = 3;
        }
    }
}

void mouse_event1_2(all_t *all)
{
    if (pos_mouse1_1.x > 935 && pos_mouse1_1.x < 1020 && pos_mouse1_1.y > 340
    && pos_mouse1_1.y < 410 || all->tow1 == 3) {
        sfSprite_setPosition(all->s_tower1, pos_tow1);
        sfSprite_setTextureRect(all->s_tower1, all->rect_tow1);
        sfRenderWindow_drawSprite(all->window, all->s_tower1, NULL);
        if (all->tow1 != 3) {
            sfClock_restart(all->clock_movetower1);
            all->tow1 = 3;
        }
    }
    if (pos_mouse1_1.x > 860 && pos_mouse1_1.x < 945 && pos_mouse1_1.y > 560
    && pos_mouse1_1.y < 630 || all->tow2 == 3) {
        sfSprite_setPosition(all->s_tower2, pos_tow2);
        sfSprite_setTextureRect(all->s_tower2, all->rect_tow2);
        sfRenderWindow_drawSprite(all->window, all->s_tower2, NULL);
        if (all->tow2 != 3) {
            sfClock_restart(all->clock_movetower1);
            all->tow2 = 3;
        }
    }
}

void mouse_event1(all_t *all)
{
    pos_mouse1_1.x = all->event.mouseButton.x;
    pos_mouse1_1.y = all->event.mouseButton.y;
    if (pos_mouse1_1.x > 1820 && pos_mouse1_1.x < 1900 && pos_mouse1_1.y > 560
    && pos_mouse1_1.y < 630 || all->tow6 == 3) {
        sfSprite_setPosition(all->s_tower6, pos_tow6);
        sfSprite_setTextureRect(all->s_tower6, all->rect_tow6);
        sfRenderWindow_drawSprite(all->window, all->s_tower6, NULL);
        if (all->tow6 != 3) {
            sfClock_restart(all->clock_movetower1);
            all->tow6 = 3;
        }
    }
    mouse_event1_2(all);
    mouse_event1_3(all);
}