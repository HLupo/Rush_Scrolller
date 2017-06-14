/*
** menu.c for menu.c in /home/HugoFuveau/projects/scroller/hugo_m/src
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Sun Apr  2 16:13:58 2017 hugo hugo.melerowicz@epitech.eu
** Last update Mon Apr  3 00:15:11 2017 lupo hugo
*/

#include "my.h"

void	menu(t_game *Game, t_init *init)
{
  sfRenderWindow_drawSprite(init->window, Game->sprite.wallpaper, NULL);
  sfRenderWindow_drawSprite(init->window, Game->sprite.wallpaper2, NULL);
  sfRenderWindow_drawSprite(init->window, Game->sprite.musics, NULL);
  sfRenderWindow_drawSprite(init->window, Game->sprite.title, NULL);
  sfRenderWindow_display(init->window);
  if (sfKeyboard_isKeyPressed(sfKeyReturn))
    Game->check_menu = 0;
}
