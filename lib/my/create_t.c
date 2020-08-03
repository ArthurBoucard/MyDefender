/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create trexture
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

void create_t2(all_t *all)
{
    all->t_tower1 = sfTexture_createFromFile("data/bg/tower.png", NULL);
    all->t_tower2 = sfTexture_createFromFile("data/bg/tower.png", NULL);
    all->t_tower3 = sfTexture_createFromFile("data/bg/tower.png", NULL);
    all->t_tower4 = sfTexture_createFromFile("data/bg/tower.png", NULL);
    all->t_tower5 = sfTexture_createFromFile("data/bg/tower.png", NULL);
    all->t_tower6 = sfTexture_createFromFile("data/bg/tower.png", NULL);
}

void create_t(all_t *all)
{
    all->t_market = sfTexture_createFromFile("data/bg/market_map.png", NULL);
    all->t_menu = sfTexture_createFromFile("data/bg/menu.jpg", NULL);
    all->t_pause = sfTexture_createFromFile("data/bg/pause-menu.png", NULL);
    all->t_plage = sfTexture_createFromFile("data/bg/playa.png", NULL);
    all->t_apo = sfTexture_createFromFile("data/bg/snow.png", NULL);
    all->t_torn = sfTexture_createFromFile("data/bg/tornado.png", NULL);
    all->t_torn2 = sfTexture_createFromFile("data/bg/minitornado.png", NULL);
    all->t_torn3 = sfTexture_createFromFile("data/bg/tornado.png", NULL);
    all->t_torn4 = sfTexture_createFromFile("data/bg/minitornado.png", NULL);
    all->t_torn5 = sfTexture_createFromFile("data/bg/minitornado.png", NULL);
    all->t_torn6 = sfTexture_createFromFile("data/bg/tornado.png", NULL);
    all->t_square = sfTexture_createFromFile("data/bg/square.png", NULL);
    all->t_settings = sfTexture_createFromFile("data/bg/setting.jpg", NULL);
    all->t_soldiers1 = sfTexture_createFromFile("data/bg/sold1.png", NULL);
    all->t_soldiers2 = sfTexture_createFromFile("data/bg/sold2.png", NULL);
    all->t_soldiers3 = sfTexture_createFromFile("data/bg/sold3.png", NULL);
    create_t2(all);
}