/*
** my_loop_menu.c for my_loop_menu.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 22:22:05 2017 lupo hugo
** Last update Mon Apr  3 00:15:41 2017 lupo hugo
*/

#include "my.h"

int	loop_menu(t_game *game, t_init *init, t_spri *s)
{
  while (sfRenderWindow_isOpen(init->window))
    {
      while (sfRenderWindow_pollEvent(init->window, (&(game->event))))
	if (game->event.type == sfEvtClosed)
	  sfRenderWindow_close(init->window);
      sfRenderWindow_clear(init->window, sfBlack);
      menu(game, init);
      move_sprites(game);
      check_keys(game, init, s);
      if (sfKeyboard_isKeyPressed(sfKeyReturn))
	return (1);
    }
  return (0);
}
