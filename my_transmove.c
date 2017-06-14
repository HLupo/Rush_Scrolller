/*
** my_transmove.c for transmove.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 19:40:03 2017 lupo hugo
** Last update Mon Apr  3 00:14:49 2017 lupo hugo
*/

#include "my.h"

void		my_move_montagne_t(t_sp *m, t_sp *m2, t_sp *m3)
{
  m->pos = sfSprite_getPosition(m->s);
  m2->pos = sfSprite_getPosition(m2->s);
  m3->pos = sfSprite_getPosition(m3->s);
  m->pos.x += 1;
  m2->pos.x += 1;
  m3->pos.x += 1;
  sfSprite_setPosition(m->s, m->pos);
  sfSprite_setPosition(m2->s, m2->pos);
  sfSprite_setPosition(m3->s, m3->pos);
}

void		my_move_cloud_t(t_sp *c, t_sp *c2)
{
  c->pos = sfSprite_getPosition(c->s);
  c2->pos = sfSprite_getPosition(c2->s);
  c->pos.x +=1;
  c2->pos.x +=1;
  sfSprite_setPosition(c->s, c->pos);
  sfSprite_setPosition(c2->s, c2->pos);
}
