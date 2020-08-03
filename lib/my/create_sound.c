/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** sound create
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

void create_sound(all_t *all)
{
    all->mu_menu = sfMusic_createFromFile("data/menu.ogg");
    all->mu_forest = sfMusic_createFromFile("data/herbe.ogg");
    all->bu_torn = sfSoundBuffer_createFromFile("data/eclair.ogg");
    all->so_torn = sfSound_create();
    sfSound_setBuffer(all->so_torn, all->bu_torn);
}
