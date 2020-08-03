/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** lib
*/

#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>

typedef struct all
{
    sfRenderWindow *window;
    sfEvent event;

    sfTexture *t_market;
    sfSprite *s_market;

    sfTexture *t_plage;
    sfSprite *s_plage;

    sfTexture *t_apo;
    sfSprite *s_apo;

    sfTexture *t_menu;
    sfSprite *s_menu;

    sfTexture *t_pause;
    sfSprite *s_pause;

    sfTexture *t_square;
    sfSprite *s_square;

    sfTexture *t_torn;
    sfSprite *s_torn;

    sfTexture *t_torn2;
    sfSprite *s_torn2;

    sfTexture *t_torn3;
    sfSprite *s_torn3;

    sfTexture *t_torn4;
    sfSprite *s_torn4;

    sfTexture *t_torn5;
    sfSprite *s_torn5;

    sfTexture *t_torn6;
    sfSprite *s_torn6;

    sfTexture *t_soldiers1;
    sfSprite *s_soldier1;

    sfTexture *t_soldiers2;
    sfSprite *s_soldier2;

    sfTexture *t_soldiers3;
    sfSprite *s_soldier3;

    sfTexture *t_tower1;
    sfSprite *s_tower1;

    sfTexture *t_tower2;
    sfSprite *s_tower2;

    sfTexture *t_tower3;
    sfSprite *s_tower3;

    sfTexture *t_tower4;
    sfSprite *s_tower4;

    sfTexture *t_tower5;
    sfSprite *s_tower5;

    sfTexture *t_tower6;
    sfSprite *s_tower6;

    sfTexture *t_settings;
    sfSprite *s_settings;

    sfMusic *mu_menu;
    sfMusic *mu_forest;

    sfSoundBuffer *bu_torn;
    sfSound *so_torn;

    sfIntRect rect_torn;
    sfIntRect rect_torn2;
    sfIntRect rect_torn3;
    sfIntRect rect_torn4;
    sfIntRect rect_torn5;
    sfIntRect rect_torn6;
    sfIntRect rect_sold1;
    sfIntRect rect_sold2;
    sfIntRect rect_sold3;
    sfIntRect rect_tow1;
    sfIntRect rect_tow2;
    sfIntRect rect_tow3;
    sfIntRect rect_tow4;
    sfIntRect rect_tow5;
    sfIntRect rect_tow6;

    sfClock *clock_sold1;
    sfClock *clock_movesold1;
    sfClock *clock_sold2;
    sfClock *clock_movesold2;
    sfClock *clock_sold3;
    sfClock *clock_movesold3;
    sfClock *clock_movetower1;
    sfClock *clock_menu;

    int m;
    int r;
    int tow1;
    int tow2;
    int tow3;
    int tow4;
    int tow5;
    int tow6;
}all_t;

sfRenderWindow *create_my_fullwindow(void);
sfRenderWindow *create_my_window(int a, int b);

int menu(all_t *all);
int close_win(all_t *all);
int menu_pause(all_t *all, sfSprite *sprite);
int main(int ac);

int move_sold1(all_t *all);
int move_sold2(all_t *all);
int move_sold3(all_t *all);

void create_sprite(all_t *all);
void create_t(all_t *all);
void create_rect(all_t *all);
void create_sound(all_t *all);
void set_texture(all_t *all);

void game1_1(all_t *all);
void game1_2(all_t *all);
int game1_3(all_t *all);

int destroy1(all_t *all);
int change_value(all_t *all);

void my_putstr(char const *str);

char *my_revstr(char *str);
char *my_return_nbr(int nb);

int my_strlen(char const *str);

void set_text(all_t *all);
void set_torn(all_t *all);
void move_tower1(all_t *all);
void mouse_event1(all_t *all);
void mouse_event1_2(all_t *all);
void mouse_event1_3(all_t *all);
void run_game(all_t *all);
void set_text1_2(all_t *all);