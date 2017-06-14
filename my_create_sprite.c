/*
** my_create_sprite.c for my_create_sprite.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 11:07:58 2017 lupo hugo
** Last update Mon Apr  3 00:15:31 2017 lupo hugo
*/

#include "my.h"

void	my_create_sprite(t_init *init, t_sp *s, float x, float y)
{
  init->texture = sfTexture_createFromFile(s->path, NULL);
  s->s = sfSprite_create();
  sfSprite_setTexture(s->s, init->texture, sfTrue);
  sfSprite_setScale(s->s, s->scale);
  s->pos.x = x;
  s->pos.y = y;
  sfSprite_setPosition(s->s, s->pos);
}

void	my_set_sprite(t_init *init, t_spri *s)
{
  my_create_sprite(init, &s->blue, 0, 0);
  my_create_sprite(init, &s->yell, -1919, 0);
  my_create_sprite(init, &s->sol, -300, 927);
  my_create_sprite(init, &s->sol2, -2860, 927);
  my_create_sprite(init, &s->montagne, 1280, 635);
  my_create_sprite(init, &s->montagne2, 0, 635);
  my_create_sprite(init, &s->montagne3, -1280, 635);
  my_create_sprite(init, &s->grey_c, 640, 20);
  my_create_sprite(init, &s->grey_c2, -640, 20);
  my_create_sprite(init, &s->white_c, 0, 240);
  my_create_sprite(init, &s->white_c2, -1280, 240);
  my_create_sprite(init, &s->airline, 0, 0);
}
