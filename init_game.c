/*
** init_game.c for init_game.c in /home/HugoFuveau/projects/scroller/hugo_m
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Sat Apr  1 14:46:50 2017 hugo hugo.melerowicz@epitech.eu
** Last update Mon Apr  3 00:12:40 2017 lupo hugo
*/

#include "my.h"

void	init_sprite(t_game *g)
{
  g->sprite.title = sfSprite_create();
  g->sprite.wallpaper = sfSprite_create();
  g->sprite.wallpaper2 = sfSprite_create();
  g->sprite.musics = sfSprite_create();
  sfSprite_setTexture(g->sprite.title, g->texture.title, sfTrue);
  sfSprite_setTexture(g->sprite.wallpaper, g->texture.wallpaper, sfTrue);
  sfSprite_setTexture(g->sprite.wallpaper2, g->texture.wallpaper, sfTrue);
  sfSprite_setTexture(g->sprite.musics, g->texture.musics, sfTrue);
  sfSprite_rotate(g->sprite.title, (-15));
}

void	init_texture(t_game *Game)
{
  Game->texture.title = sfTexture_createFromFile
    ("assets/Images/JUST-A-RANDOM-NAME.png", NULL);
  Game->texture.wallpaper = sfTexture_createFromFile
    ("assets/Images/wallpaper3.jpg", NULL);
  Game->texture.musics = sfTexture_createFromFile
    ("assets/Images/scroller_musics.png", NULL);
}

int	init_game(t_game *Game)
{
  init_texture(Game);
  init_sprite(Game);
  return (0);
}
