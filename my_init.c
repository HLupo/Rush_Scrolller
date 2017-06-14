/*
** my_init.c for my_init.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 10:56:42 2017 lupo hugo
** Last update Mon Apr  3 00:15:36 2017 lupo hugo
*/

#include "my.h"

void		my_set_stru2(t_spri *s)
{
  s->grey_c.path = "elem/picture/nuages2.png";
  s->grey_c.scale.x = 1;
  s->grey_c.scale.y = 1;
  s->grey_c2.path = "elem/picture/nuages2.png";
  s->grey_c2.scale.x = 1;
  s->grey_c2.scale.y = 1;
  s->blue.path = "elem/rock_4.png";
  s->blue.scale.x = 1;
  s->blue.scale.y = 1;
  s->yell.path = "elem/tamer.png";
  s->yell.scale.x = 1;
  s->yell.scale.y = 1;
  s->airline.path = "elem/airline.png";
  s->airline.scale.x = 1;
  s->airline.scale.y = 1;
}

void		my_set_stru(t_spri *s)
{
  s->sol.path = "elem/picture/herbe4.png";
  s->sol.scale.x = 2;
  s->sol.scale.y = 1;
  s->sol2.path = "elem/picture/herbe4.png";
  s->sol2.scale.x = 2;
  s->sol2.scale.y = 1;
  s->montagne.path = "elem/picture/montagnes.png";
  s->montagne.scale.x = 1;
  s->montagne.scale.y = 1;
  s->montagne2.path = "elem/picture/montagnes.png";
  s->montagne2.scale.x = 1;
  s->montagne2.scale.y = 1;
  s->montagne3.path = "elem/picture/montagnes.png";
  s->montagne3.scale.x = 1;
  s->montagne3.scale.y = 1;
  s->white_c.path = "elem/picture/nuages1.png";
  s->white_c.scale.x = 1;
  s->white_c.scale.y = 1;
  s->white_c2.path = "elem/picture/nuages1.png";
  s->white_c2.scale.x = 1;
  s->white_c2.scale.y = 1;
  my_set_stru2(s);
}

void		loop(t_init *init, t_spri *s, t_game *game)
{
  while (sfRenderWindow_isOpen(init->window))
    {
      while (sfRenderWindow_pollEvent(init->window, &init->event))
	if (init->event.type == sfEvtClosed)
	  sfRenderWindow_close(init->window);
      sfRenderWindow_clear(init->window, sfBlack);
      my_background(init, s);
      check_keys(game, init, s);
      sfRenderWindow_display(init->window);
    }
}

void		my_set_window(t_init *init)
{
  sfVideoMode	mode;

  mode.height = 1080;
  mode.width = 1920;
  mode.bitsPerPixel = 32;
  init->window = sfRenderWindow_create(mode, "Scroller",
				       sfResize | sfClose, NULL);
}

int		main()
{
  t_game	game;
  t_init	init;
  t_spri	s;

  my_set_window(&init);
  if ((init.window) == NULL)
    return (84);
  init_game(&game);
  init_sprite_positions(&game);
  init_music(&game);
  my_set_stru(&s);
  my_set_sprite(&init, &s);
  if ((loop_menu(&game, &init, &s)) == 1)
    loop(&init, &s, &game);
  sfRenderWindow_destroy(init.window);
}
