/*
** keys.c for keys.c in /home/HugoFuveau/projects/scroller/hugo_m/src
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Sun Apr  2 02:44:41 2017 hugo hugo.melerowicz@epitech.eu
** Last update Mon Apr  3 00:13:17 2017 lupo hugo
*/

#include "my.h"

void	check_keys2(t_spri *s)
{
  if (sfKeyboard_isKeyPressed(sfKeyLeft))
    {
      s->airline.pos.x -= 1;
      sfSprite_setPosition(s->airline.s, s->airline.pos);
    }
  if (sfKeyboard_isKeyPressed(sfKeyRight))
    {
      s->airline.pos.x += 1;
      sfSprite_setPosition(s->airline.s, s->airline.pos);
    }
  if (sfKeyboard_isKeyPressed(sfKeyUp))
    {
      s->airline.pos.y -= 1;
      sfSprite_setPosition(s->airline.s, s->airline.pos);
    }
  if (sfKeyboard_isKeyPressed(sfKeyDown))
    {
      s->airline.pos.y += 1;
      sfSprite_setPosition(s->airline.s, s->airline.pos);
    }
}

void	check_keys(t_game *Game, t_init *init, t_spri *s)
{
  if (sfKeyboard_isKeyPressed(sfKeyEscape))
    sfRenderWindow_close(init->window);
  if (sfKeyboard_isKeyPressed(sfKeyNum1))
    launch_music(Game->music.track1, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum2))
    launch_music(Game->music.track2, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum3))
    launch_music(Game->music.track3, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum4))
    launch_music(Game->music.track4, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum5))
    launch_music(Game->music.track5, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum6))
    launch_music(Game->music.track6, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum7))
    launch_music(Game->music.track7, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum8))
    launch_music(Game->music.track8, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum9))
    launch_music(Game->music.track9, Game);
  if (sfKeyboard_isKeyPressed(sfKeyNum0))
    launch_music(Game->music.track10, Game);
  check_keys2(s);
}
