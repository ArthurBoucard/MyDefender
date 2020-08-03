/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create_rect
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

void create_rect3 (all_t *all)
{
    all->rect_sold3.width = 69;
    all->rect_sold3.height = 66;
    all->rect_tow1.top = 0;
    all->rect_tow1.left = 0;
    all->rect_tow1.width = 91.99999999999997;
    all->rect_tow1.height = 155;
    all->rect_tow2.top = 0;
    all->rect_tow2.left = 0;
    all->rect_tow2.width = 91.99999999999997;
    all->rect_tow2.height = 155;
}

void create_rect2(all_t *all)
{
    all->rect_torn4.width = 95;
    all->rect_torn4.height = 50;
    all->rect_torn5.left = 0;
    all->rect_torn5.width = 95;
    all->rect_torn5.height = 50;
    all->rect_torn6.top = 0;
    all->rect_torn6.left = 0;
    all->rect_torn6.width = 95;
    all->rect_torn6.height = 200;
    all->rect_sold2.top = 140;
    all->rect_sold2.left = 0;
    all->rect_sold2.width = 69;
    all->rect_sold2.height = 66;
    all->rect_sold3.top = 140;
    all->rect_sold3.left = 0;
    create_rect3(all);
}

void create_rect1(all_t *all)
{
    all->rect_sold1.top = 140;
    all->rect_sold1.left = 0;
    all->rect_sold1.width = 69;
    all->rect_sold1.height = 66;
    all->rect_torn.top = 0;
    all->rect_torn.left = 0;
    all->rect_torn.width = 95;
    all->rect_torn.height = 200;
    all->rect_torn2.top = 0;
    all->rect_torn2.left = 0;
    all->rect_torn2.width = 95;
    all->rect_torn2.height = 50;
    all->rect_torn3.top = 0;
    all->rect_torn3.left = 0;
    all->rect_torn3.width = 95;
    all->rect_torn3.height = 200;
    all->rect_torn4.top = 0;
    all->rect_torn4.left = 0;
    create_rect2(all);
}

void create_rect(all_t *all)
{
    create_rect1(all);
    all->rect_tow3.top = 0;
    all->rect_tow3.left = 0;
    all->rect_tow3.width = 91.99999999999997;
    all->rect_tow3.height = 155;
    all->rect_tow4.top = 0;
    all->rect_tow4.left = 0;
    all->rect_tow4.width = 91.99999999999997;
    all->rect_tow4.height = 155;
    all->rect_tow5.top = 0;
    all->rect_tow5.left = 0;
    all->rect_tow5.width = 91.99999999999997;
    all->rect_tow5.height = 155;
    all->rect_tow6.top = 0;
    all->rect_tow6.left = 0;
    all->rect_tow6.width = 91.99999999999997;
    all->rect_tow6.height = 155;
    all->rect_torn5.top = 0;
}