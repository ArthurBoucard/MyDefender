/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create sprite
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

void create_sprite2(all_t *all)
{
    all->s_settings = sfSprite_create();
    all->s_soldier1 = sfSprite_create();
    all->s_soldier2 = sfSprite_create();
    all->s_soldier3 = sfSprite_create();
    all->s_tower1 = sfSprite_create();
    all->s_tower2 = sfSprite_create();
    all->s_tower3 = sfSprite_create();
    all->s_tower4 = sfSprite_create();
    all->s_tower5 = sfSprite_create();
    all->s_tower6 = sfSprite_create();
}

void create_sprite(all_t *all)
{
    all->s_market = sfSprite_create();
    all->s_menu = sfSprite_create();
    all->s_pause = sfSprite_create();
    all->s_plage = sfSprite_create();
    all->s_apo = sfSprite_create();
    all->s_torn = sfSprite_create();
    all->s_torn2 = sfSprite_create();
    all->s_torn3 = sfSprite_create();
    all->s_torn4 = sfSprite_create();
    all->s_torn5 = sfSprite_create();
    all->s_torn6 = sfSprite_create();
    all->s_square = sfSprite_create();
    create_sprite2(all);
}