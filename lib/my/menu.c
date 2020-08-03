/*
** EPITECH PROJECT, 2020
** defenders
** File description:
** menu
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

sfVector2f pos_mouse_menu = {0.00, 0.00};

int mouse_menu4(all_t *all)
{
    if (pos_mouse_menu.x > 650 && pos_mouse_menu.x < 1300 &&
    pos_mouse_menu.y > 570 && pos_mouse_menu.y < 700) {
        sfVector2f pos_square = {485, 530};
        sfSprite_setPosition(all->s_square, pos_square);
        sfRenderWindow_drawSprite(all->window, all->s_square, NULL);
        all->r = 3;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEnter) == sfTrue && all->r == 3) {
        all->m = 3;
        all->r = 0;
        sfMusic_stop(all->mu_menu);
        game1_3(all);
        return (1);
    }
    if (pos_mouse_menu.x > 830 && pos_mouse_menu.x < 1130 &&
    pos_mouse_menu.y > 915 && pos_mouse_menu.y < 1080) {
        return (4);
    }
    return 0;
}

int mouse_menu3(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter) == sfTrue && all->r == 2) {
        all->m = 2;
        all->r = 0;
        sfMusic_stop(all->mu_menu);
        game1_2(all);
        return (1);
    }
    if (pos_mouse_menu.x > 650 && pos_mouse_menu.x < 1300 &&
    pos_mouse_menu.y > 370 && pos_mouse_menu.y < 520) {
        sfVector2f pos_square = {490, 338};
        sfSprite_setPosition(all->s_square, pos_square);
        all->r = 2;
        sfRenderWindow_drawSprite(all->window, all->s_square, NULL);
    }
    return 0;
}

int mouse_menu2(all_t *all)
{
    if (pos_mouse_menu.x > 650 && pos_mouse_menu.x < 1300 &&
    pos_mouse_menu.y > 200 && pos_mouse_menu.y < 330) {
        sfVector2f pos_square = {490, 145};
        sfSprite_setPosition(all->s_square, pos_square);
        sfRenderWindow_drawSprite(all->window, all->s_square, NULL);
        all->r = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEnter) == sfTrue && all->r == 1) {
        all->m = 1;
        all->r = 0;
        sfMusic_stop(all->mu_menu);
        game1_1(all);
        return 1;
    }
    return 0;
}

int mouse_menu(all_t *all)
{
    int i = 0;
    int j;

    pos_mouse_menu.x = all->event.mouseButton.x;
    pos_mouse_menu.y = all->event.mouseButton.y;
    if (j = mouse_menu2(all) != 0)
        return j;
    if (j = mouse_menu3(all) != 0)
        return j;
    if (j = mouse_menu4(all) != 0)
        return j;
    if (pos_mouse_menu.x > 830 && pos_mouse_menu.x < 1130 &&
    pos_mouse_menu.y > 780 && pos_mouse_menu.y < 860) {
        while (i == 0) {
            while (sfRenderWindow_pollEvent(all->window, &all->event))
                i = close_win(all);
            if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
                i = 1;
            sfRenderWindow_drawSprite(all->window, all->s_settings, NULL);
            sfRenderWindow_display(all->window);
        }
        sfRenderWindow_clear(all->window, sfBlack);
    }
    return i;
}

int menu(all_t *all)
{
    int i = 0;

    sfMusic_play(all->mu_menu);
    sfMusic_setLoop(all->mu_menu, sfTrue);
    while (i == 0) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            i = close_win(all);
        }
        if (i == 4)
            return (84);
        sfRenderWindow_clear(all->window, sfBlack);
        sfRenderWindow_drawSprite(all->window, all->s_menu, NULL);
        i = mouse_menu(all);
        sfRenderWindow_display(all->window);
    }
    sfMusic_stop(all->mu_menu);
    return (i);
}