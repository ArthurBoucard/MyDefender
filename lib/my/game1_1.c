/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** running game
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

sfVector2f pos_sold1 = {-30, 440.00};
sfVector2f pos_sold2 = {-3000, 440.00};
sfVector2f pos_sold3 = {-8000, 440.00};
sfVector2f pos_torn = {930, 298};
sfVector2f pos_torn2 = {857, 462};
sfVector2f pos_torn3 = {1199, 515};
sfVector2f pos_torn5 = {1735, 675};
sfVector2f pos_torn6 = {1815, 517};

int game_end(all_t *all)
{
    return (0);
}

void run_game(all_t *all)
{
    if (sfClock_getElapsedTime(all->clock_movesold1).microseconds >= 100) {
        if (pos_sold1.x < 1015 || pos_sold1.y > 645) {
            all->rect_sold1.top = 137;
            pos_sold1.x = pos_sold1.x + 0.6;
        } else {
            all->rect_sold1.top = 0;
            pos_sold1.y = pos_sold1.y+ 0.6;
        }
        if (pos_sold1.x > 1990) {
            pos_sold1.x = -150;
            pos_sold1.y = 440;
        }
        sfClock_restart(all->clock_movesold1);
        sfSprite_setPosition(all->s_soldier1, pos_sold1);
    }
    if (sfClock_getElapsedTime(all->clock_movesold2).microseconds >= 100) {
        if (pos_sold2.x < 1015 || pos_sold2.y > 645) {
            all->rect_sold2.top = 137;
            pos_sold2.x = pos_sold2.x + 0.75;
        } else {
            all->rect_sold2.top = 0;
            pos_sold2.y = pos_sold2.y + 0.75;
        }
        if (pos_sold2.x > 1990) {
            pos_sold2.x = -1000;
            pos_sold2.y = 440;
        }
        sfClock_restart(all->clock_movesold2);
        sfSprite_setPosition(all->s_soldier2, pos_sold2);
    }
    if (sfClock_getElapsedTime(all->clock_movesold3).microseconds >= 100) {
        if (pos_sold3.x < 1015 || pos_sold3.y > 645) {
            all->rect_sold3.top = 137;
            pos_sold3.x = pos_sold3.x + 1;
        } else {
            all->rect_sold3.top = 0;
            pos_sold3.y = pos_sold3.y + 1;
        }
        if (pos_sold3.x > 1990) {
            pos_sold3.x = -1400;
            pos_sold3.y = 440;
        }
        sfClock_restart(all->clock_movesold3);
        sfSprite_setPosition(all->s_soldier3, pos_sold3);
    }
    if (pos_sold1.x > 880 && pos_sold1.x < 990 && all->tow1 == 3
    || pos_sold2.x > 880 && pos_sold2.x < 990 && all->tow1 == 3 ||
    pos_sold3.x > 880 && pos_sold3.x < 990 && all->tow1 == 3) {
        sfSound_play(all->so_torn);
        sfSprite_setPosition(all->s_torn, pos_torn);
        all->rect_torn.left = 0;
    } else {
        all->rect_torn.left = -100;
    }
    if (pos_sold1.x > 810 && pos_sold1.x < 900 && all->tow2 == 3
    || pos_sold2.x > 810 && pos_sold2.x < 900 && all->tow2 == 3 ||
    pos_sold3.x > 810 && pos_sold3.x < 900 && all->tow2 == 3) {
        sfSound_play(all->so_torn);
        sfSprite_setPosition(all->s_torn2, pos_torn2);
        all->rect_torn2.left = 0;
    } else {
        all->rect_torn2.left = -100;
    }
    if (pos_sold1.x > 1150 && pos_sold1.x < 1240 && all->tow3 == 3
    || pos_sold2.x > 1150 && pos_sold2.x < 1240 && all->tow3 == 3 ||
    pos_sold3.x > 1150 && pos_sold3.x < 1240 && all->tow3 == 3) {
        sfSound_play(all->so_torn);
        sfSprite_setPosition(all->s_torn3, pos_torn3);
        all->rect_torn3.left = 0;
    } else {
        all->rect_torn3.left = -100;
    }
    if (pos_sold1.x > 1700 && pos_sold1.x < 1790 && all->tow5 == 3
    || pos_sold2.x > 1700 && pos_sold2.x < 1790 && all->tow5 == 3 ||
    pos_sold3.x > 1700 && pos_sold3.x < 1790 && all->tow5 == 3) {
        sfSound_play(all->so_torn);
        sfSprite_setPosition(all->s_torn5, pos_torn5);
        all->rect_torn5.left = 0;
    } else {
        all->rect_torn5.left = -100;
    }
    if (pos_sold1.x > 1770 && pos_sold1.x < 1860 && all->tow6 == 3
    || pos_sold2.x > 1770 && pos_sold2.x < 1860 && all->tow6 == 3 ||
    pos_sold3.x > 1770 && pos_sold3.x < 1860 && all->tow6 == 3) {
        sfSound_play(all->so_torn);
        sfSprite_setPosition(all->s_torn6, pos_torn6);
        all->rect_torn6.left = 0;
    } else {
        all->rect_torn6.left = -100;
    }
}

void game1_1(all_t *all)
{
    sfMusic_play(all->mu_forest);
    sfMusic_setLoop(all->mu_forest, sfTrue);
    pos_sold1.x = -30;
    pos_sold2.x = -3000;
    pos_sold3.x = -8000;
    sfSprite_setPosition(all->s_soldier1, pos_sold1);
    sfSprite_setPosition(all->s_soldier2, pos_sold2);
    sfSprite_setPosition(all->s_soldier3, pos_sold3);
    set_torn(all);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            close_win(all);
            if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
                menu_pause(all, all->s_market);
        }
        run_game(all);
        move_sold1(all);
        move_sold2(all);
        move_sold3(all);
        set_text(all);
    }
}
