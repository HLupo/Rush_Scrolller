/*
** move.c for move.c in /home/HugoFuveau/projects/scroller/hugo_m/src
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Sun Apr  2 01:39:45 2017 hugo hugo.melerowicz@epitech.eu
** Last update Mon Apr  3 00:15:16 2017 lupo hugo
*/

#include "my.h"

void	move_wallpaper(t_game *Game)
{
  sfSprite_setPosition(Game->sprite.wallpaper, Game->wall_pos);
  sfSprite_setPosition(Game->sprite.wallpaper2, Game->wall_pos2);
  if (Game->wall_move <= 1920)
    {
      Game->wall_pos.x += 1;
      Game->wall_pos2.x += 1;
      Game->wall_move += 1;
    }
  else
    {
      Game->wall_pos.x = 0;
      Game->wall_pos2.x = -1920;
      Game->wall_move = 0;
    }
}

void	move_title(t_game *Game)
{
  sfSprite_setPosition(Game->sprite.title, Game->title_pos);
  if (Game->title_move <= 880 ||
      (Game->title_move > 1760 && Game->title_move <= 2640))
    Game->title_pos.y += 1;
  else if (Game->title_move <= 1760 ||
           (Game->title_move > 2460 && Game->title_move <= 3520))
    Game->title_pos.y -= 1;
  Game->title_pos.x += 1;
  Game->title_move += 1;
  if (Game->title_move > 3520)
    {
      Game->title_move = 0;
      Game->title_pos.x = - 800;
      Game->title_pos.y = 200;
    }
}

void	move_sprites(t_game *Game)
{
  move_title(Game);
  move_wallpaper(Game);
}
