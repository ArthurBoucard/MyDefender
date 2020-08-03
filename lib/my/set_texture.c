/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** set texture
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

void set_texture2(all_t *all)
{
    sfSprite_setTexture(all->s_soldier1, all->t_soldiers1, sfTrue);
    sfSprite_setTexture(all->s_soldier2, all->t_soldiers2, sfTrue);
    sfSprite_setTexture(all->s_soldier3, all->t_soldiers3, sfTrue);
    sfSprite_setTexture(all->s_tower1, all->t_tower1, sfTrue);
    sfSprite_setTexture(all->s_tower2, all->t_tower2, sfTrue);
    sfSprite_setTexture(all->s_tower3, all->t_tower3, sfTrue);
    sfSprite_setTexture(all->s_tower4, all->t_tower4, sfTrue);
    sfSprite_setTexture(all->s_tower5, all->t_tower5, sfTrue);
    sfSprite_setTexture(all->s_tower6, all->t_tower6, sfTrue);
    sfSprite_setTexture(all->s_settings, all->t_settings, sfTrue);
}

void set_texture(all_t *all)
{
    sfSprite_setTexture(all->s_market, all->t_market, sfTrue);
    sfSprite_setTexture(all->s_menu, all->t_menu, sfTrue);
    sfSprite_setTexture(all->s_pause, all->t_pause, sfTrue);
    sfSprite_setTexture(all->s_plage, all->t_plage, sfTrue);
    sfSprite_setTexture(all->s_apo, all->t_apo, sfTrue);
    sfSprite_setTexture(all->s_torn, all->t_torn, sfTrue);
    sfSprite_setTexture(all->s_torn2, all->t_torn2, sfTrue);
    sfSprite_setTexture(all->s_torn3, all->t_torn3, sfTrue);
    sfSprite_setTexture(all->s_torn4, all->t_torn4, sfTrue);
    sfSprite_setTexture(all->s_torn5, all->t_torn5, sfTrue);
    sfSprite_setTexture(all->s_torn6, all->t_torn6, sfTrue);
    sfSprite_setTexture(all->s_square, all->t_square, sfTrue);
    set_texture2(all);
}