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

sfVector2f pos_sold2_1 = {-30.00, 700.00};
sfVector2f pos_sold2_2 = {-3000.00, 700.00};
sfVector2f pos_sold2_3 = {-8000.00, 700.00};

int game_end2(all_t *all)
{
    return (0);
}

int run_game2(all_t *all)
{
    if (sfClock_getElapsedTime(all->clock_movesold1).microseconds >= 100) {
        if (pos_sold2_1.x < 840 || pos_sold2_1.y < 190) {
            all->rect_sold1.top = 137;
            pos_sold2_1.x = pos_sold2_1.x + 0.5;
        } else {
            all->rect_sold1.top = 207;
            pos_sold2_1.y = pos_sold2_1.y - 0.5;
        }
        if (pos_sold2_1.x > 1990) {
            pos_sold2_1.x = -100;
            pos_sold2_1.y = 700;
        }
        sfClock_restart(all->clock_movesold1);
        sfSprite_setPosition(all->s_soldier1, pos_sold2_1);
    }
    if (sfClock_getElapsedTime(all->clock_movesold2).microseconds >= 100) {
        if (pos_sold2_2.x < 840 || pos_sold2_2.y < 190) {
            all->rect_sold2.top = 137;
            pos_sold2_2.x = pos_sold2_2.x + 0.75;
        } else {
            all->rect_sold2.top = 207;
            pos_sold2_2.y = pos_sold2_2.y - 0.75;
        }
        if (pos_sold2_2.x > 1990) {
            pos_sold2_2.x = -850;
            pos_sold2_2.y = 700;
        }
        sfClock_restart(all->clock_movesold2);
        sfSprite_setPosition(all->s_soldier2, pos_sold2_2);
    }
    if (sfClock_getElapsedTime(all->clock_movesold3).microseconds >= 100) {
        if (pos_sold2_3.x < 840 || pos_sold2_3.y < 190) {
            all->rect_sold3.top = 137;
            pos_sold2_3.x = pos_sold2_3.x + 1;
        } else {
            all->rect_sold3.top = 207;
            pos_sold2_3.y = pos_sold2_3.y - 1;
        }
        if (pos_sold2_3.x > 1990) {
            pos_sold2_3.x = -280;
            pos_sold2_3.y = 700;
        }
        sfClock_restart(all->clock_movesold3);
        sfSprite_setPosition(all->s_soldier3, pos_sold2_3);
    }
}

void game1_2(all_t *all)
{
    pos_sold2_1.x = -30;
    pos_sold2_2.x = -3000;
    pos_sold2_3.x = -8000;
    sfSprite_setPosition(all->s_soldier1, pos_sold2_1);
    sfSprite_setPosition(all->s_soldier2, pos_sold2_2);
    sfSprite_setPosition(all->s_soldier3, pos_sold2_3);
    set_torn(all);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            close_win(all);
            if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
                menu_pause(all, all->s_apo);
        }
        run_game2(all);
        move_sold1(all);
        move_sold2(all);
        move_sold3(all);
        set_text1_2(all);
    }
}
