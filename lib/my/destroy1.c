/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** destruct 1
*/

#include "my.h"
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>

int destroy1(all_t *all)
{
    sfMusic_destroy(all->mu_menu);
    sfMusic_destroy(all->mu_forest);
    sfTexture_destroy(all->t_market);
    sfTexture_destroy(all->t_plage);
    sfTexture_destroy(all->t_apo);
    sfTexture_destroy(all->t_menu);
    sfTexture_destroy(all->t_pause);
    sfSprite_destroy(all->s_market);
    sfSprite_destroy(all->s_plage);
    sfSprite_destroy(all->s_apo);
    sfSprite_destroy(all->s_menu);
    sfSprite_destroy(all->s_pause);
    sfSound_destroy(all->so_torn);
    sfSoundBuffer_destroy(all->bu_torn);
    return (0);
}