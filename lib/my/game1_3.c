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

int end1(all_t *all)
{
    return (0);
}

int game1_3(all_t *all)
{
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            close_win(all);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            menu_pause(all, all->s_plage);
        sfRenderWindow_drawSprite(all->window, all->s_plage, NULL);
        sfRenderWindow_display(all->window);
        sfRenderWindow_clear(all->window, sfBlack);
    }
    return (0);
}
