/*
** init_game2.c for init_game2.c in /home/HugoFuveau/projects/scroller/hugo_m/src
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Sun Apr  2 16:41:45 2017 hugo hugo.melerowicz@epitech.eu
** Last update Mon Apr  3 00:13:02 2017 lupo hugo
*/

#include "my.h"

void	init_title_pos(t_game *Game)
{
  Game->title_move = 0;
  Game->title_pos.x = - 1600;
  Game->title_pos.y = 200;
}

void	init_wallpaper_pos(t_game *Game)
{
  Game->wall_move = 0;
  Game->wall_pos.x = 0;
  Game->wall_pos.y = 0;
  Game->wall_pos2.x = -1920;
  Game->wall_pos2.y = 0;
}

void	init_sprite_positions(t_game *Game)
{
  init_title_pos(Game);
  init_wallpaper_pos(Game);
}
