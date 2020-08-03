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

void set_torn(all_t *all)
{
    all->rect_torn.left = -100;
    all->rect_torn2.left = -100;
    all->rect_torn3.left = -100;
    all->rect_torn5.left = -100;
    all->rect_torn6.left = -100;
}

void set_text2(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->s_torn, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_torn3, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_torn6, NULL);
    sfRenderWindow_display(all->window);
}

void set_text(all_t *all)
{
    sfRenderWindow_clear(all->window, sfBlack);
    sfSprite_setTextureRect(all->s_soldier1, all->rect_sold1);
    sfSprite_setTextureRect(all->s_soldier2, all->rect_sold2);
    sfSprite_setTextureRect(all->s_soldier3, all->rect_sold3);
    sfSprite_setTextureRect(all->s_torn, all->rect_torn);
    sfSprite_setTextureRect(all->s_torn2, all->rect_torn2);
    sfSprite_setTextureRect(all->s_torn3, all->rect_torn3);
    sfSprite_setTextureRect(all->s_torn5, all->rect_torn5);
    sfSprite_setTextureRect(all->s_torn6, all->rect_torn6);
    sfRenderWindow_drawSprite(all->window, all->s_market, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_soldier3, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_soldier2, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_soldier1, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_torn2, NULL);
    sfRenderWindow_drawSprite(all->window, all->s_torn5, NULL);
    mouse_event1(all);
    move_tower1(all);
    set_text2(all);
}