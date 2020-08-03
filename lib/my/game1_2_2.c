/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** game1_1_2
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

void set_text2_2(all_t *all)
{
    sfRenderWindow_display(all->window);
}

void set_text1_2(all_t *all)
{
    sfRenderWindow_clear(all->window, sfBlack);
    sfSprite_setTextureRect(all->s_soldier1, all->rect_sold1);
    sfSprite_setTextureRect(all->s_soldier2, all->rect_sold2);
    sfSprite_setTextureRect(all->s_soldier3, all->rect_sold3);
    sfRenderWindow_drawSprite(all->window, all->s_apo, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_soldier3, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_soldier2, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_soldier1, NULL);
    set_text2_2(all);
}