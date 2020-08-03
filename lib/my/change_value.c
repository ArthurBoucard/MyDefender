/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** value tower
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

int change_value(all_t *all)
{
    all->tow1 = 0;
    all->tow2 = 0;
    all->tow3 = 0;
    all->tow4 = 0;
    all->tow5 = 0;
    all->tow6 = 0;
    all->rect_tow1.left = 0;
    all->rect_tow2.left = 0;
    all->rect_tow3.left = 0;
    all->rect_tow4.left = 0;
    all->rect_tow5.left = 0;
    all->rect_tow6.left = 0;
    return 0;
}
