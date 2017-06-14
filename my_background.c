/*
** my_background.c for my_background.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 18:53:45 2017 lupo hugo
** Last update Mon Apr  3 00:15:25 2017 lupo hugo
*/

#include "my.h"

void	check_transit(t_spri *s)
{
  static int	i = -1;
  static int	x = -1;
  static int	c = -1;

  my_move_sol(&s->sol, &s->sol2);
  if (++i == 1)
    {
      i = -1;
      if (s->montagne3.pos.x != SCREEN_WIDTH)
	my_move_montagne_t(&s->montagne, &s->montagne2, &s->montagne3);
    }
  if (++x == 6)
    {
      x = -1;
      if (s->white_c2.pos.x != SCREEN_WIDTH)
	my_move_cloud_t(&s->white_c, &s->white_c2);
    }
  if (++c == 20)
    {
      c = -1;
      if (s->grey_c2.pos.x != SCREEN_WIDTH)
	my_move_cloud(&s->grey_c, &s->grey_c2);
    }
}

int	to_transit(t_spri *s)
{
  if (s->blue.pos.x != SCREEN_WIDTH)
    {
      s->blue.pos.x +=1;
      s->yell.pos.x +=1;
    }
  sfSprite_setPosition(s->blue.s, s->blue.pos);
  sfSprite_setPosition(s->yell.s, s->yell.pos);
  check_transit(s);
  return (0);
}

int	transition(t_init *init, t_spri *s)
{
  sfRenderWindow_drawSprite(init->window, s->yell.s, NULL);
  return (to_transit(s));
}

void	hill(t_init *init, t_spri *s)
{
  sfRenderWindow_drawSprite(init->window, s->blue.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->sol.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->sol2.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->montagne.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->montagne2.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->montagne3.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->grey_c.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->grey_c2.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->airline.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->white_c.s, NULL);
  sfRenderWindow_drawSprite(init->window, s->white_c2.s, NULL);
}

void	my_background(t_init *init, t_spri *s)
{
  static int	i = -1;

  if (++i <= 3000)
    {
      hill(init, s);
      to_do(s);
    }
  else
    if ((transition(init, s)) == 0)
      hill(init, s);
}
