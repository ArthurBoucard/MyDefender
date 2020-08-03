/*
** EPITECH PROJECT, 2020
** my defender
** File description:
** menu pause
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

int mouse_pause(all_t *all)
{
    sfVector2f pos_mouse = {0.00, 0.00};

    pos_mouse.x = all->event.mouseButton.x;
    pos_mouse.y = all->event.mouseButton.y;
    if (pos_mouse.x > 930 && pos_mouse.x < 1000 &&
    pos_mouse.y > 380 && pos_mouse.y < 495) {
        if (all->m == 1) {
            sfMusic_stop(all->mu_forest);
        }
        sfRenderWindow_clear(all->window, sfBlack);
        change_value(all);
        menu(all);
        return 1;
    }
    if (pos_mouse.x > 1070 && pos_mouse.x < 1140 &&
    pos_mouse.y > 380 && pos_mouse.y < 495) {
        return (2);
        }
    if (pos_mouse.x > 810 && pos_mouse.x < 880 &&
    pos_mouse.y > 380 && pos_mouse.y < 495) {
        if (all->m == 1) {
            sfRenderWindow_clear(all->window, sfBlack);
            change_value(all);
            sfMusic_stop(all->mu_forest);
            game1_1(all);
            return 1;
        } else if (all->m == 2) {
            sfRenderWindow_clear(all->window, sfBlack);
            change_value(all);
            game1_2(all);
            return 1;
        } else if (all->m == 3) {
            sfRenderWindow_clear(all->window, sfBlack);
            change_value(all);
            game1_3(all);
            return 1;
        }
        return (0);
    }
    return 0;
}

int menu_pause(all_t *all, sfSprite *sprite)
{
    int i = 0;
    sfVector2f pos_pause = {700.00, -15.00};

    sfSprite_setPosition(all->s_pause, pos_pause);
    while (i == 0) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            i = close_win(all);
        }
        if (i == 4)
            return (84);
        i = mouse_pause(all);
        sfRenderWindow_drawSprite(all->window, sprite, NULL);
        sfRenderWindow_drawSprite(all->window, all->s_pause, NULL);
        sfRenderWindow_display(all->window);
    }
    sfRenderWindow_clear(all->window, sfBlack);
    return (i);
}