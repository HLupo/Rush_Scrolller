/*
** my_exec.c for my_exec.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 18:05:42 2017 lupo hugo
** Last update Mon Apr  3 00:14:42 2017 lupo hugo
*/

#include "my.h"

void	to_do(t_spri *s)
{
  static int	i = -1;
  static int	x = -1;
  static int	c = -1;

  my_move_sol(&s->sol, &s->sol2);
  if (++i == 30)
    {
      i = -1;
      my_move_montagne(&s->montagne, &s->montagne2, &s->montagne3);
    }
  if (++x == 6)
    {
      x = -1;
      my_move_cloud(&s->white_c, &s->white_c2);
    }
  if (++c == 20)
    {
      c = -1;
      my_move_cloud(&s->grey_c, &s->grey_c2);
    }
}
